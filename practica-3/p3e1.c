/*
    1.  Resuelva:
        a. Defina una estructura rectangulo que contenga los siguientes campos: base (float) y altura (float). ✅
        b. Escriba una función que reciba una estructura rectangulo y la inicialice a partir de valores ingresados por teclado. ✅
        c. Escriba una función que dada una estructura rectangulo, calcule el área. ✅
        d. Escriba un programa que defina un arreglo de 10 rectángulos (struct rectangulo) y lo inicialice utilizando la función definida en el inciso anterior. Luego, informe el número de rectángulo que tiene menor área. ✅
*/

#define DIM 10
#include <stdio.h>

typedef struct
{
    float base;
    float altura;
} rectangulo;

void cargar(rectangulo *);
float calcularArea(rectangulo);

int main()
{

    rectangulo recs[DIM] = {
        {10, 20},
        {10, 21},
        {10, 245},
        {100, 20},
        {104, 250},
        {10, 90},
        {10, 10},
        {40, 37},
        {35, 56},
        {540, 188},
    };
    rectangulo rec;
    float min = 99999999.0, area;

    for (int i = 0; i < DIM; i++)
    {
        // cargar(&recs[i]);
        area = calcularArea(recs[i]);
        if (area < min)
        {
            min = area;
            rec = recs[i];
        }
    }

    printf("El rectángulo de menor area (%.2f) es el que tiene base = %.2f y altura = %.2f\n", min, rec.base, rec.altura);

    return 0;
}

void cargar(rectangulo *r)
{
    printf("Ingrese la base: ");
    scanf("%f", &(r->base));

    printf("Ingrese la altura: ");
    scanf("%f", &(r->altura));
}

float calcularArea(rectangulo r)
{
    return r.base * r.altura;
}