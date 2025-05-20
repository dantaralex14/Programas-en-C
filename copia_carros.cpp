#include <pthread.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <semaphore.h>

#define IZQ     0
#define DER     1

#define A1      1
#define A2      2
#define A3      3
#define A4      4
#define A5      5
#define A6      6

#define EX_IZ   0
#define MED_IZ  10
#define MED_DE  21
#define EX_DE   31

int a1 = 0;
int a2 = 0;
int a3 = 0;
char c1[] = "*---------            ---------- ";
char c2[] = "          \\          / ";
char c3[] = "+------------------------------- ";
char c4[] = "          /          \\ ";
char c5[] = "|---------            ---------- ";

int x1 = 0, x2 = 0, x3 = 0;

void dibujar() {
    system("clear");
    printf("\n");
    printf("%s\n", c1);
    printf("%s\n", c2);
    printf("%s\n", c3);
    printf("%s\n", c4);
    printf("%s\n", c5);
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
    if (carro == A1)
        return a1;
    else if (carro == A2)
        return a2;
    else if (carro == A3)
        return a3;
    else
        return -1;
}

int final(int carro) {
    carro = get_carro_pos(carro);
    if (carro == EX_IZ)
        return 1;
    else if (carro == EX_DE)
        return 2;
    else if (carro < EX_DE && carro > EX_IZ)
        return 0;
    else
        return -1;
}

void printvar(char c, int x, int y) {
    switch (y) {
        case 0:
            c1[x] = c;
            break;
        case 1:
            c2[x] = c;
            break;
        case 2:
            c3[x] = c;
            break;
        case 3:
            c4[x] = c;
            break;
        case 4:
            c5[x] = c;
    }
    dibujar();
}

void calcular(int *y_act, int *y_ant, char c, char *r, int act, int ant, int y_max, int y_med, int y_min, char c_iz, char c_de) {
    *y_ant = y_max;
    *y_act = y_max;
    if (act == MED_IZ) {
        if (ant > act) {
            *y_act = y_med;
            *y_ant = y_min;
        }
        if (ant < act) {
            *y_act = y_med;
            *y_ant = y_max;
        }
    } else if (act == MED_DE) {
        if (ant > act) {
            *y_act = y_med;
            *y_ant = y_max;
        }
        if (ant < act) {
            *y_act = y_med;
            *y_ant = y_min;
        }
    } else if (act > MED_IZ && act < MED_DE) {
        *y_ant = y_min;
        *y_act = y_min;
    } else if (act >= EX_IZ && act < MED_IZ)
        *y_act = y_max;
    else if (act > MED_DE && act < EX_DE)
        *y_act = y_max;

    if (ant == MED_IZ) {
        *r = c_iz;
        *y_ant = y_med;
    } else if (ant == MED_DE) {
        *r = c_de;
        *y_ant = y_med;
    }
    printvar(*r, ant, *y_ant);
    printvar(c, act, *y_act);
}

void mover(int carro, int ant, int act) {
    int y_ant = 0, y_act = 0;
    char c, r = '-';
    switch (carro) {
        case A1:
            c = '*';
            calcular(&y_act, &y_ant, c, &r, act, ant, 0, 1, 2, '\\', '/');
            break;
        case A2:
            c = '+';
            y_act = 2;
            y_ant = 2;
            break;
        case A3:
            c = '|';
            calcular(&y_act, &y_ant, c, &r, act, ant, 4, 3, 2, '/', '\\');
    }
    printvar(r, ant, y_ant);
    printvar(c, act, y_act);
}

int mover_auto(int carro, int direccion) {
    int ant = 0, act = 0;
    if (final(carro) != -1) {
        switch (carro) {
            case A1:
                ant = a1;
                if (direccion) {
                    if (final(carro) != 2)
                        a1++;
                } else if (final(carro) != 1)
                    a1--;
                act = a1;
                break;
            case A2:
                ant = a2;
                if (direccion) {
                    if (final(carro) != 2)
                        a2++;
                } else if (final(carro) != 1)
                    a2--;
                act = a2;
                break;
            case A3:
                ant = a3;
                if (direccion) {
                    if (final(carro) != 2)
                        a3++;
                } else if (final(carro) != 1)
                    a3--;
                act = a3;
        }
        mover(carro, ant, act);
    }
    return final(carro);
}

void *automovil1(void *a) {
    for (;;) {
        ms_delay(400); 
        mover_auto(A1, 1);
        ms_delay(400); 
        mover_auto(A1, 0);
    }
}

void *automovil2(void *b) {
    for (;;) {
        ms_delay(600); 
        mover_auto(A2, 1);
        ms_delay(600); 
        mover_auto(A2, 0);
    }
}

void *automovil3(void *c) {
    for (;;) {
        ms_delay(800); 
        mover_auto(A3, 1);
        ms_delay(800); 
        mover_auto(A3, 0);
    }
}

int main(int argc, char **argv) {
    dibujar();
    pthread_t h1, h2, h3;
    pthread_create(&h1, NULL, automovil1, NULL);
    pthread_create(&h2, NULL, automovil2, NULL);
    pthread_create(&h3, NULL, automovil3, NULL);
    pthread_join(h1, NULL);
    pthread_join(h2, NULL);
    pthread_join(h3, NULL);
    return 0;
}
