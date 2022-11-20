// Importo Librerias
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

// Defino Arreglo & Variables "X";"Y"
int a[4][17], x, y, sum[0][0];

// Defino Registros
typedef struct
{  
    int edad;//1 al 110
    int ejerc1; // 1 a 4 
    int vicios; //1 o 4
    int antecedentes; //1 a 2
    int ultimaV; // 1 a 3 s
    int consumoS; // 1 a 3
}tdato;

// Defino Procedimiento
void Grupo_Ectario(void)
{
    switch (x)
    {
    case 1:
        printf("\n - Entre 15 y 30: ");
        break;
    case 2:
        printf("\n - Entre 30 y 60 anos: ");
        break;
    case 3:
        printf("\n - Mayor a 60 anos: ");
        break;
    }
};

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;
 
    // Storing start time
    clock_t start_time = clock();
 
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}

// Defino colores
#define RESET_COLOR "\x1b[0m"
#define NEGRO_T "\x1b[30m"
#define NEGRO_F "\x1b[40m"
#define ROJO_T "\x1b[31m"
#define ROJO_F "\x1b[41m"
#define VERDE_T "\x1b[32m"
#define VERDE_F "\x1b[42m"
#define AMARILLO_T "\x1b[33m"
#define AMARILLO_F "\x1b[43m"
#define AZUL_T "\x1b[34m"
#define AZUL_F "\x1b[44m"
#define MAGENTA_T "\x1b[35m"
#define MAGENTA_F "\x1b[45m"
#define CYAN_T "\x1b[36m"
#define CYAN_F "\x1b[46m"
#define BLANCO_T "\x1b[37m"
#define BLANCO_F "\x1b[47m"

int main(void)
{
    int i, s;
       FILE *arch= fopen("entrada.dat","rb");
    if (arch == NULL){
        printf("error\n");
        exit(1);
    }
    tdato dato; // indice de registro 
    fread(&dato, sizeof(tdato), 1, arch);
    // Inicializamos Contadores
    for (x = 1; x <= 4; x++)
    {
        for (y = 1; y <= 17; y++)
        {
            a[x][y];
        }
    }

    printf("\n  B I E N V E N I D O!\n ======================\n\n Procesando Informacion... Informe Generado Correctamente\n");
    delay(2);
    system("cls");
    printf(AMARILLO_T"\n  B I E N V E N I D O!\n ======================\n\n Programa: Lab C\n Copyright: R\n Autor: The C Team\n Fecha: 06/11/22 10:00\n Descripcion: Este programa realiza las funciones para el enunciado publicado en el Repo de GitHub.\n");
    printf("\n Formato de Registro\n");
    while (dato.edad != 0)
    {
        if (s<5)
        {    
            printf(" N de Iteracion: %d", s);
            printf("\n - Edad: %d\n - ejerc1: %d\n - Vicios: %d\n - Antecedentes: %d\n - Ultima visita al cardiologo: %d\n - Consumo de sal: %d\n", dato.edad, dato.ejerc1, dato.vicios, dato.antecedentes, dato.ultimaV, dato.consumoS);
            printf("\n");
        }  

            
        // Pregunta 1; 1.bis
        if (dato.edad >= 15 & dato.edad <= 30)
        {
            x = 1;
        }

        if (dato.edad > 30 & dato.edad <= 60)
        {
            x = 2;
        }

        if (dato.edad > 60)
        {
            x = 3;
        }

        switch (dato.ejerc1)
        {
        case 1:
            a[x][1] = a[x][1] + 1; // Total que votaron "NO"
            a[4][1] = a[4][1] + 1;
            break;
        case 2:
            a[x][2] = a[x][2] + 1;
            a[4][2] = a[4][2] + 1; // Total que votaron "Diariamente"
            break;
        case 3:
            a[x][3] = a[x][3] + 1;
            a[4][3] = a[4][3] + 1; // Total que votaron "Cada 2 días"
            break;
        case 4:
            a[x][4] = a[x][4] + 1;
            a[4][4] = a[4][4] + 1; // Total que votaron "Cada 3 días"
            break;
        }

        // Pregunta 2; 2.bis
        switch (dato.vicios)
        {
        case 1:
            a[x][5] = a[x][5] + 1;
            a[4][5] = a[4][5] + 1; // Total Gral. "NO"
            break;
        case 2:
            a[x][6] = a[x][6] + 1;
            a[4][6] = a[4][6] + 1; // Total Gral. "Cigarrillo"
            break;
        case 3:
            a[x][7] = a[x][7] + 1;
            a[4][7] = a[4][7] + 1; // Total Gral. "Alcohol"
            break;
        case 4:
            a[x][8] = a[x][8] + 1;
            a[4][8] = a[4][8] + 1; // Total Gral. "Drogas"
            break;
        }

        // Pregunta 3
        if (dato.antecedentes == 2)
        {
            a[x][9] = a[x][9] + 1;
            a[4][9] = a[4][9] + 1; // Total Gral. "SI"
        }
        else
        {
            a[x][10] = a[x][10] + 1;
            a[4][10] = a[4][10] + 1; // Total Gral. "NO"
        }

        // Pregunta 4
        switch (dato.ultimaV)
        {
        case 1:
            a[x][11] = a[x][11] + 1;
            a[4][11] = a[4][11] + 1; // Total Gral. "Alta"
            break;
        case 2:
            a[x][12] = a[x][12] + 1;
            a[4][12] = a[4][12] + 1; // Total Gral. "Media"
            break;
        case 3:
            a[x][13] = a[x][13] + 1;
            a[4][13] = a[4][13] + 1; // Total Gral. "Drogas"
            break;
        }

        // Pregunta 5
        switch (dato.consumoS)
        {
        case 1:
            a[x][14] = a[x][14] + 1;
            a[4][14] = a[4][14] + 1; // Total Gral. "Alta"
            break;
        case 2:
            a[x][15] = a[x][15] + 1;
            a[4][15] = a[4][15] + 1; // Total Gral. "Media"
            break;
        case 3:
            a[x][16] = a[x][16] + 1;
            a[x][16] = a[x][16] + 1; // Total Gral. "Drogas"
            break;
        }
        s++;
        fread(&dato, sizeof(tdato), 1, arch);
    }
    fclose(arch);
    printf("------------------------------------------------------------------------------------------------------------\n\n");
    printf(" - Total de Personas que Votaron: ");
    sum[x][y] = a[4][1] + a[4][2] + a[4][3] + a[4][4];
    printf("%i ", sum[x][y]);
    printf("\n - Total de Personas que no realizan ejercicio: %i", a[4][1]);
    printf("\n - Total de Personas que realizan ejercicio: ");
    sum[x][y] = a[4][2] + a[4][3] + a[4][4];
    printf("%i \n", sum[x][y]);

    printf("\n\t\t    ==> Total de Personas que realizan ejerc1 discriminados por Grupo Ectario y Opcion <==\n");
    printf("\t\t -----------------------------------------------------------------------------------------------\n\n");
    printf("\t%17s%16s%16s%16s\n", " NO", "Diariamente", "Cada 2 dias", "Cada 3 dias");
    printf("\t\t       --------------------------------------------------");

    // Pregunta 1
    for (x = 1; x <= 3; x++)
    {
        Grupo_Ectario();
        for (y = 1; y <= 4; y++)
        {
            printf("\t%-15d", a[x][y]);
        }
    }
    printf("\n\t\t       --------------------------------------------------\n");

    // Pregunta 2
    printf("\n - Total de Personas con Vicios: %i", a[4][6] + a[4][7] + a[4][8]);
    printf("\n - Total de Personas que no tienen Vicios: %i\n", a[4][5]);

    printf("\n\t\t    ==> Total de Personas que tienen Vicios discriminados por Grupo Ectario y Opcion <==\n");
    printf("\t\t ------------------------------------------------------------------------------------------\n\n");
    printf("\t%17s%16s%16s%16s\n", " NO", "Cigarrillo", "Alcohol", "Drogas");
    printf("\t\t       --------------------------------------------------");

    for (x = 1; x <= 3; x++)
    {
        Grupo_Ectario();
        for (y = 5; y <= 8; y++)
        {
            printf("\t%-15d", a[x][y]);
        }
    }
    printf("\n\t\t       --------------------------------------------------\n");

    // Pregunta 3
    printf("\n - Total de Personas con antedecentes familiares con problemas cardiovasculares: %i", a[4][9]);
    printf("\n - Total de Personas que no tienen antedecentes familiares con problemas cardiovasculares: %i", a[4][10]);

    printf("\n\n\t\t    ==> Total de Personas que tienen o no antecentes familiares con problemas cardiovasculares <==\n");
    printf("\t\t ----------------------------------------------------------------------------------------------------\n\n");
    printf("\t%17s%16s\n", " SI", "NO");
    printf("\t\t       ------------------");

    for (x = 1; x <= 3; x++)
    {
        Grupo_Ectario();
        for (y = 9; y <= 10; y++)
        {
            printf("\t%-15d", a[x][y]);
        }
    }
    printf("\n\t\t       ------------------\n");

    // Pregunta 4
    printf("\n\t\t    ==> Total de Personas que visitaron al cardiologo discriminado por Grupo Ectario y Opcion <==\n");
    printf("\t\t ---------------------------------------------------------------------------------------------------\n\n");
    printf("\t%28s%23s%15s\n", "Recientemente", "Cerca de 3 meses", "Un ano o mas");
    printf("\t\t       ---------------------------------------------------");

    for (x = 1; x <= 3; x++)
    {
        Grupo_Ectario();
        for (y = 11; y <= 13; y++)
        {
            printf("\t%12d", a[x][y]);
        }
    }
    printf("\n\t\t       ---------------------------------------------------\n");
    
    // Pregunta 5
    printf("\n\t\t    ==> Calificacion de consumo de sal discriminado por Grupo Ectario y Opcion <==\n");
    printf("\t\t ------------------------------------------------------------------------------------\n\n");
    printf("\t%19s%14s%16s\n", "Alta", "Media", "Baja");
    printf("\t\t       ----------------------------------");

    for (x = 1; x <= 3; x++)
    {
        Grupo_Ectario();
        for (y = 14; y <= 16; y++)
        {
            printf("\t%-13d", a[x][y]);
        }
    }
    printf("\n\t\t       ----------------------------------\n");

    printf("\n Finalizo el arch!\n");
    system("pause");
    return 0;
}