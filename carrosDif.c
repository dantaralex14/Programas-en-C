#include <pthread.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#define IZQ 0
#define DER 1
#define A1 1
#define A2 2
#define A3 3
#define EX_IZ 0
#define MED_IZ 10
#define MED_DE 21
#define EX_DE 31

int a1 = 0, a2 = 0, a3 = 0;

char c1[] = "*---------            ---------- ";
char c2[] = "          \\          / ";
char c3[] = "+------------------------------- ";
char c4[] = "          /          \\ ";
char c5[] = "|---------            ---------- ";

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;
int turno = A2;  

void dibujar() {
    system("clear");
    printf("\n%s\n%s\n%s\n%s\n%s\n", c1, c2, c3, c4, c5);
}

void ms_delay(int sleep_ms) {
    struct timespec tv;
    if (sleep_ms != 0) {
        tv.tv_sec = sleep_ms / 1000;
        tv.tv_nsec = (sleep_ms % 1000) * 1000000;
        nanosleep(&tv, NULL);
    }
}

int get_carro_pos(int carro) {
    if (carro == A1) return a1;
    else if (carro == A2) return a2;
    else if (carro == A3) return a3;
    return -1;
}

int final(int carro) {
    int pos = get_carro_pos(carro);
    if (pos == EX_IZ) return 1;
    else if (pos == EX_DE) return 2;
    else if (pos > EX_IZ && pos < EX_DE) return 0;
    return -1;
}

void printvar(char c, int x, int y) {
    switch (y) {
        case 0: c1[x] = c; break;
        case 1: c2[x] = c; break;
        case 2: c3[x] = c; break;
        case 3: c4[x] = c; break;
        case 4: c5[x] = c;
    }
    dibujar();
}

void mover(int carro, int ant, int act) {
    int y_ant = 0, y_act = 0;
    char c, r = '-';

    switch (carro) {
        case A1: 
            c = '*';
            if (act == MED_IZ) { 
                y_act = 1;
                y_ant = 0;
            } else if (act == MED_DE) { 
                y_act = 1;
                y_ant = 0;
            } else {
                y_act = 0;
                y_ant = 0;
            }
            break;
        case A2: 
            c = '+';
            y_act = 2;
            y_ant = 2;
            break;
        case A3: 
            c = '|';
            if (act == MED_IZ) { 
                y_act = 3;
                y_ant = 4;
            } else if (act == MED_DE) { 
                y_act = 3;
                y_ant = 4;
            } else {
                y_act = 4;
                y_ant = 4;
            }
            break;
    }
    printvar(r, ant, y_ant); 
    printvar(c, act, y_act); 
}

int mover_auto(int carro, int direccion) {
    int ant = get_carro_pos(carro);
    int act = ant;

    if (final(carro) != -1) {
        if (direccion == DER && final(carro) != 2) act++;
        else if (direccion == IZQ && final(carro) != 1) act--;

        switch (carro) {
            case A1: a1 = act; break;
            case A2: a2 = act; break;
            case A3: a3 = act; break;
        }
        mover(carro, ant, act);
    }
    return final(carro);
}

void *automovil(void *arg) {
    int carro = *(int *)arg;
    int direccion = DER;

    for (;;) {
        pthread_mutex_lock(&mutex);
        while (turno != carro) {
            pthread_cond_wait(&cond, &mutex);
        }

        if (mover_auto(carro, direccion) != 0) {
            direccion = (direccion == DER) ? IZQ : DER;
        }

        if (carro == A2) {
            turno = A1;  
        } else if (carro == A1) {
            turno = A3;  
        } else if (carro == A3) {
            turno = A2;  
        }

        pthread_cond_broadcast(&cond);
        pthread_mutex_unlock(&mutex);

        ms_delay(1000); 
    }
    return NULL;
}

int main() {
    dibujar();

    pthread_t h1, h2, h3;
    int id1 = A1, id2 = A2, id3 = A3;

    pthread_create(&h1, NULL, automovil, &id1);
    pthread_create(&h2, NULL, automovil, &id2);
    pthread_create(&h3, NULL, automovil, &id3);

    pthread_join(h1, NULL);
    pthread_join(h2, NULL);
    pthread_join(h3, NULL);

    return 0;
}

// Dantar Alejandro Ortiz Vega 7B
// Materia: Logisitica de Procesos
// Profesor: Apolinar Gonzales Potes
// Para este codigo lo trate de implementar una red de petri quitando los semaforos que anteriormente habian en el codigo y lo que hice fue 
// implementar un codigo diferente en el que los carros esperaban su turno para pasar aunque tambien trate de hacer que dichos carros se coordinaran
// para su cruce
