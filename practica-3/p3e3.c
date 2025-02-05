/*
    3.  Resuelva:
        a. Defina una estructura direccion que contenga los siguientes campos: calle (arreglo de 50 caracteres), ciudad  (arreglo de 30 caracteres), codigo_postal (int) y pais (arreglo de 40 caracteres). ✅
        b. Defina una estructura alu que contenga los siguientes campos: apellido (arreglo  de 50 caracteres),  nombre  (arreglo  de  50  caracteres),  legajo  (arreglo  de  8  caracteres),  promedio (float) y domicilio (struct direccion). ✅
            a. Renombre el tipo struct alu a alumno mediante la palabra clave typedef. ✅
            b. Escriba  una  función  que  reciba  un  alumno  y  lo  inicialice  a  partir  de  valores  ingresados  por teclado. ✅
            c. Escriba un programa que defina un arreglo de 30 elementos alumno y lo inicialice utilizando la función definida en el inciso anterior. Luego, informe el nombre y apellido del alumno que tiene mejor promedio. ✅
        c. Defina  la  estructura  pun3D,  la  cual  representa  una  posición  en  el  espacio.  La  misma  debe contener los campos x (float), y (float) y z (float). ✅ Luego:
            a. Renombre la estructura pun3D a punto3D utilizando la palabra clave typedef. ✅
            b. Imprima en pantalla el tamaño del tipo struct pun3D. ¿Cuánto ocupa? ¿Por qué? ✅
                - Ocupa 12 bytes ya que es una estructura de 3 campos de tipo float, el cual ocupa 4 bytes.
            c. Imprima  en  pantalla  el  tamaño  del  tipo  punto3D.  ¿Cuánto  ocupa?  ¿Es  igual  al  de  struct pun3D? ¿Por qué? ✅
                - El tipo punto3D ocupa lo mismo que struct pun3D ya que el primero es tan solo un alias del segundo elemento.
            d. Defina un arreglo de 4 elementos de tipo punto3D e imprima en pantalla el espacio ocupado por el mismo. ¿Cuánto ocupa? ¿Por qué? ✅
                - La nueva estructura ocupa 48 bytes ya que se trata de una estructura de 4 elementos de 12 bytes cada uno.
*/

#include <stdio.h>
#define CANT 30

struct pun3D
{
    float x;
    float y;
    float z;
};

typedef struct pun3D punto3D;

typedef struct
{
    char calle[50];
    char ciudad[30];
    int codigo_postal;
    char pais[40];
} direccion;

struct alumno
{
    char apellido[50];
    char nombre[50];
    char legajo[8];
    float promedio;
    direccion direc;
};
typedef struct alumno alu;

int main()
{
    punto3D arr[4];

    printf("La estructura punto3D ocupa %d bytes\n", sizeof(punto3D));
    printf("La estructura array de punto3D ocupa %d bytes\n", sizeof(arr));

    // alu alumnos[CANT];

    // for (int i = 0; i < CANT; i++)
    // {
    //     iniciarAlumno(&alumnos[i]);
    // }

    // for (int i = 0; i < CANT; i++)
    // {
    //     imprimirAlumno(&alumnos[i]);
    // }

    return 0;
}

void iniciarAlumno(alu *a)
{
    printf("Ingrese el nombre del alumno: ");
    scanf("%s", a->nombre);

    printf("Ingrese el apellido del alumno: ");
    scanf("%s", a->apellido);

    printf("Ingrese el legajo del alumno: ");
    scanf("%s", a->legajo);

    printf("Ingrese el promedio del alumno: ");
    scanf("%f", &a->promedio);

    printf("\n---- Datos del domicilio ----\n");

    printf("Ingrese la calle: ");
    scanf("%s", a->direc.calle);

    printf("Ingrese la ciudad: ");
    scanf("%s", a->direc.ciudad);

    printf("Ingrese el codigo postal: ");
    scanf("%d", &a->direc.codigo_postal);

    printf("Ingrese el pais: ");
    scanf("%s", a->direc.pais);
}

void imprimirAlumno(const alu *a)
{
    printf("\n\n");

    printf("---------------------------------------------------------------------------------------------------------------\n");
    printf("| %-10s | %-10s | %-8s | %-8s | %-20s | %-15s | %-13s | %-15s |\n",
           "Nombre", "Apellido", "Legajo", "Promedio", "Calle", "Ciudad", "Cod. Postal", "Pais");
    printf("---------------------------------------------------------------------------------------------------------------\n");

    printf("| %-10s | %-10s | %-8s | %-8.2f | %-20s | %-15s | %-13d | %-15s |\n",
           a->nombre, a->apellido, a->legajo, a->promedio, a->direc.calle, a->direc.ciudad, a->direc.codigo_postal, a->direc.pais);
    printf("---------------------------------------------------------------------------------------------------------------\n");
}
