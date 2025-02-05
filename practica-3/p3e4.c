/*
    4.  Implemente  una  estructura  y  las  funciones  para  implementar  un  mazo  de  50  cartas  españolas. Implemente las siguientes funciones y realice un programa para probarlas:
        a. Barajar el mazo de cartas. ✅
        b. Sacar una carta: dado un mazo, sacar la carta del mazo y devolverla. ✅
        c. Imprimir una carta (número/figura con su palo). ✅

    Nota: utilice constantes (define o const) para definir los palos de las cartas, modelice las cartas y el mazo.
*/

#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

#define CANT 50
// #define ESPADA "espada"
// #define BASTO "basto"
// #define ORO "oro"
// #define COPA "copa"

typedef struct
{
    char palo[10];
    int nro;
} carta;

void inicializar(carta[], int);
void barajar(carta[], int);
carta tomarCarta(carta[], int);
void imprimirCartas(const carta[], int);
void imprimirCarta(carta);

int main()
{
    srand(time(NULL));

    carta mazo[CANT];

    inicializar(mazo, CANT);
    // barajar(mazo, CANT);
    imprimirCartas(mazo, CANT);

    carta unaCarta = tomarCarta(mazo, CANT);
    printf("\n---- Carta obtenida ----\n");
    imprimirCarta(unaCarta);
    printf("\n\n"); // Formato alineado

    imprimirCartas(mazo, CANT - 1);

    return 0;
}

void inicializar(carta mazo[], int cant)
{
    int nro_carta = 0;
    char palos[4][10] = {"ESPADA", "BASTO", "ORO", "COPA"};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            mazo[nro_carta].nro = j + 1;
            strcpy(mazo[nro_carta].palo, palos[i]);
            nro_carta++;
        }
    }

    carta joker1 = {"joker1", 0};
    mazo[nro_carta] = joker1;
    nro_carta++;
    carta newCarta = {"joker2", 0};
    mazo[nro_carta] = newCarta;
}

void barajar(carta *mazo, int cant)
{
    srand(time(NULL));
    for (int i = cant - 1; i > 0; i--) // Al recorrer el arreglo de atrás hacia adelante me ahorro el problema de que al obtener un numero random, salga el numero de una carta ya procesada por el bucle for. Ejemplo: si i = 37, al obtener un numero random no me saldrá ninguna del 49 al 38
    {
        int j = rand() % (i + 1);
        carta aux = mazo[i];
        mazo[i] = mazo[j];
        mazo[j] = aux;
    }
}

carta tomarCarta(carta mazo[], int cant)
{
    int nroCarta = rand() % 50;
    printf("\nnro carta: %d\n", nroCarta);

    carta c = mazo[nroCarta];

    for (int i = nroCarta; i < cant; i++)
    {
        mazo[i] = mazo[i + 1];
    }

    return c;
}

void imprimirCartas(const carta mazo[], int cant)
{

    for (int i = 0; i < cant; i++)
    {
        imprimirCarta(mazo[i]);
        printf("\n");
    }

    return;

    // Asegurarse de que hay exactamente 48 cartas (4 palos x 12 valores)
    if (cant < 48)
    {
        printf("Error: Se esperaban al menos 48 cartas.\n");
        return;
    }

    // Imprimir en formato de 4 columnas con 12 filas
    for (int fila = 0; fila < 12; fila++) // 12 filas
    {
        for (int col = 0; col < 4; col++) // 4 columnas
        {
            int index = col * 12 + fila; // Calcular el índice de la carta en el mazo
            imprimirCarta(mazo[index]);
            printf("\t"); // Separar columnas
        }
        printf("\n"); // Salto de línea después de imprimir una fila completa
    }
}

void imprimirCarta(carta c)
{
    printf("| %-7s %2d |", c.palo, c.nro); // Formato alineado
}
