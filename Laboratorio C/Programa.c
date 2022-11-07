/*
    Nombre: Lab C
    Copyright: R
    Autor: "The C Team"
    Fecha: 06/11/22 10:00
    Dprintfripción: Este programa realiza las funciones para el enunciado publicado en el Repo de GitHub.

*/

// Importo Librerias
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Defino Arreglo & Variables "X";"Y"
int a[4][17], x, y, sum[0][0];

/* Defino Datos del Registro
char* ejercicios[] = {"SI", "NO"};
char* frec[] = {"Diariamente", "Cada 2 días", "Cada 3 días"};
char* vicios[] = {"SI", "NO"};
char* tiposVicio[] = {"Cigarillo", "Alcohol", "Drogas", " "};
char* antecedentesF[] = {"SI", "NO"};
char* ultimaV[] = {"Recientemente", "Cerca de 3 meses", "Un año o mas"};
char* calif[] = {"Alta", "Media", "Baja"};
*/

// Defino Registros
struct apeynom
{
    char apellido[30];
    char nombre[30];
    int edad;
};

struct fort_paciente
{
    int dni;
    char *ejercicios;
    char *frec;
    char *vicios;
    char *tiposVicio;
    char *antecedentesF;
    char *ultimaV;
    char *calif;
};

// Defino Procedimiento
void Grupo_Ectario(void)
{
    switch (x)
    {
    case 1:
        printf("Entre 15 y 30 años");
        break;
    case 2:
        printf("Entre 30 y 60 años");
        break;
    case 3:
        printf("Mayor a 60 años");
        break;
    }
};

/// @brief
/// @return
int main()
{

    // Inicio y Declaración de Datos (Registro Apellido y Nombre; Fort_Paciente)
    struct apeynom ayn = {"Lezcano Genes", "Joshua David", 19};
    struct fort_paciente r = {44651798, "SI", "Diariamente", "SI", "Cigarrillo", "SI", "Recientemente", "Alta"};

    // Prueba de Datos (Registro Apellido y Nombre)
    printf("Registro Apellido y Nombre, Datos:\n\nApellido = %s\nNombre = %s\nEdad = %i", ayn.apellido, ayn.nombre, ayn.edad);

    // Prueba de Datos (Registro Fort_Paciente)
    printf("\n\nDNI = %i\nRealiza Ejercicio Diariamente? = %s\nCon que frecuencia? = %s\nTiene vicios? = %s\nCual tipo de vicio? = %s\nTiene antecedentes familiares con prob. cardiov.? = %s\nCuando fue la ultima vez que visito a su cardiologo? = %s\nComo calificaria el uso de sal en sus comidas? = %s", r.dni, r.ejercicios, r.frec, r.vicios, r.tiposVicio, r.antecedentesF, r.ultimaV, r.calif);

    // Inicializamos Contadores
    for (x = 1; x <= 4; x++)
    {
        for (y = 1; y <= 17; y++)
        {
            a[x][y];
        }
    }

    // Abrimos Archivo (Excel)
    FILE *dir_arch = fopen("Data.csv", "r"); // puntero a archivo; r= read, w= write

    // Caso para Error
    if (dir_arch == NULL)
    {
        printf("\nError: Al leer archivo");
        return 1;
    }

    // Caso para Exito
    printf("\nExito! Se leyo correctamente. \n");
    printf("\nA partir de aca, el archivo: \n\n");
    
    char caracter;
    caracter = fgetc(dir_arch); // f de file, get de obtener y c de caracter - obtener caracter del archivo
    

    while (feof(dir_arch) == 0) // f de file, eof end of file, final de archivo
    {
        printf("%c", caracter);
        caracter = fgetc(dir_arch);
        // Fila -> Rango Ectario
        switch (ayn.edad)
        {
        case 1:
            x = 1;
            break;
        case 2:
            x = 2;
            break;
        case 3:
            x = 3;
            break;
        }

        // Pregunta 1; 1.bis

        if (r.ejercicios == "SI")
        {
            a[x][1] = a[x][1] + 1; // Total que votaron "NO"
            a[4][1] = a[4][1] + 1;
        }
        else
        {
            switch (sizeof(r.frec))
            {
            case 1:
                a[x][2] = a[x][2] + 1;
                a[4][2] = a[4][2] + 1; // Total que votaron "Diariamente"
                break;
            case 2:
                a[x][3] = a[x][3] + 1;
                a[4][3] = a[4][3] + 1; // Total que votaron "Cada 2 días"
                break;
            case 3:
                a[x][4] = a[x][4] + 1;
                a[4][4] = a[4][4] + 1; // Total que votaron "Cada 3 días"
                break;
            }
        }

        // Pregunta 2; 2.bis

        if (r.vicios == "NO")
        {
            a[x][5] = a[x][5] + 1;
            a[4][5] = a[4][5] + 1; // Total Gral. "NO"
        }
        else
        {
            switch (sizeof(r.tiposVicio))
            {
            case 1:
                a[x][6] = a[x][6] + 1;
                a[4][6] = a[4][6] + 1; // Total Gral. "Cigarrillo"
                break;
            case 2:
                a[x][7] = a[x][7] + 1;
                a[4][7] = a[4][7] + 1; // Total Gral. "Alcohol"
                break;
            case 3:
                a[x][8] = a[x][8] + 1;
                a[4][8] = a[4][8] + 1; // Total Gral. "Drogas"
                break;
            }
        }

        // Pregunta 3

        if (r.antecedentesF == "SI")
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

        switch (sizeof(r.ultimaV))
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

        switch (sizeof(r.calif))
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

        // fread(dir_arch);
    }
    
    printf("Procesando Información");
    printf("Informe Generado Correctamente");
    printf("Total de Personas que Votaron: ");
    sum[x][y] = a[4][1] + a[4][2] + a[4][3];
    printf("%i ", sum[x][y]);
    printf("Total de Personas que no realizan Ejercicio: ", a[4][1]);
    printf("Total de Personas que realizan Ejercicio: ");
    sum[x][y] = a[4][2] + a[4][3];
    printf("%i ", sum[x][y]);
    printf("Total de Personas que realizan Ejercicio discriminados por Grupo Ectario y Opción: ");
    

    // Pregunta 1
    printf("NO | Diariamente | Cada 2 dias | Cada 3 dias |");
    for (x = 1; x <= 3; x++)
    {
        Grupo_Ectario();
        for (y = 1; y <= 4; y++)
        {
            printf("|", a[x][y], "|");
        }
    }

    // Pregunta 2
    printf("Total de Personas con Vicios: ", a[4][6] + a[4][7] + a[4][8]);
    printf("Total de Personas que no tienen Vicios:", a[4][5]);
    printf("Total de Personas que tienen Vicios discriminados por Grupo Ectario y Opción");
    printf("|NO|Cigarrillo|Alcohol|Drogas|");

    for (x = 1; x <= 3; x++)
    {
        Grupo_Ectario();
        for (y = 5; y <= 8; y++)
        {
            printf("|", a[x][y], "|");
        }
    }

    // Pregunta 3
    printf("Total de Personas con antedecentes familiares con problemas cardiovasculares:", a[4][9]);
    printf("Total de Personas que no tienen antedecentes familiares con problemas cardiovasculares:", a[4][10]);
    printf("Total de Personas que tienen o no antecentes familiares con problemas cardiovasculares discriminado por Grupo Ectario y Opción");
    printf("|SI|NO|");

    for (x = 1; x <= 3; x++)
    {
        Grupo_Ectario();
        for (y = 9; y <= 10; y++)
        {
            printf("|", a[x][y], "|");
        }
    }

    // Pregunta 4
    printf("Total de Personas que visitaron al cardiologo discriminado por Grupo Ectario y Opción");
    printf("|Recientemente|Cerca de 3 meses|Un año o mas|");

    for (x = 1; x <= 3; x++)
    {
        Grupo_Ectario();
        for (y = 11; y <= 13; y++)
        {
            printf("|", a[x][y], "|");
        }
    }

    // Pregunta 5
    printf("Calificacion de consumo de sal discriminado por Grupo Ectario y Opción");
    printf("|Alta|Media|Baja");

    for (x = 1; x <= 3; x++)
    {
        Grupo_Ectario();
        for (y = 14; y <= 16; y++)
        {
            printf("|", a[x][y], "|");
        }
    }

    system("pause");
    return 0;
    fclose(dir_arch);
}