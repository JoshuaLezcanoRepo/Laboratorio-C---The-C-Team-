//Segundo laboratorio de la materia algoritmos y estructuras de datos//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
// estructura del registro 
typedef struct
{  
    int edad;//1 al 110
    int ejerc1; // 1 a 4 
    int vicios; //1 o 4
    int antecedentes; //1 a 2
    int ultimaV; // 1 a 3 s
    int consumoS; // 1 a 3
}tdato;
    
/*/
char facu[10][6] = {{'U','T','N'},{'U','B','A'},{'U','N','L','P'},{'U','N','C'},{'U','N','I','C','E','N'},{'U','N','S'},{'U','C','C'},{'U','N','N','O','B','A'},{'U','C','A'},{'U','N','E','R'}};
int provinciasFacu[10][10]={{1,5,2,6},{1,5},{20},{12},{5,8,2,3},{7,9,6},{1,23,6},{21,4},{18,16,17,14,12},{19,11,10,21}};
/*/
int main(void){
    int limite_superior;
    int limite_inferior;
    int sup_e; 
    int inf_e;  
    int sup_ej;
    int inf_ej; 
    int sup_ult; 
    int inf_ult; 
    int sup_consumo; 
    int inf_consumo; 
    int i; 
    char x; 
    // crea el archivo binario y lo abre 
    FILE *arch= fopen("entrada.dat","ab");
    if (arch == NULL){
        printf("error\n");
        return 1;
    } else{
        printf("se leyo\n");
    }
    tdato dato; // indice de registro 
    // 
    srand(time(NULL));
    limite_superior = 2; 
    limite_inferior = 1; 
    sup_e = 110; 
    inf_e = 15; 
    sup_ej = 4;
    inf_ej = 1;
    inf_ult = 1; 
    sup_ult = 3; 
     for (i = 1; i < 15001; i++)
     {
        printf("Iteracion nro: %d", i);
        dato.edad= inf_e + rand()%(sup_e +1 - inf_e);  // numero de 1 a 100 
        dato.ejerc1 = inf_ej + rand()%(sup_ej +1 - inf_ej); // 1 a 4 
        dato.vicios = inf_ej + rand()%(sup_ej +1 - inf_ej); // 1 a 4 
        dato.antecedentes = limite_inferior + rand()%(limite_superior +1 - limite_inferior); 
        dato.ultimaV = inf_ult + rand()%(sup_ult +1 - inf_ult);
        dato.consumoS = inf_ult + rand()%(sup_ult +1 - inf_ult);
        fwrite(&dato,sizeof(tdato),1,arch);
        printf("\n edad=%d\nejercicio=%d\nvicios=%d\nantecedentes=%d\nultimaV=%d\nconsumoS=%d\n",dato.edad,dato.ejerc1,dato.vicios,dato.antecedentes,dato.ultimaV,dato.consumoS);
        printf("\n\n");
     }
      printf("se ejecuto %d\n",i);
    /*/
    for(i=0;i<10;i++){
        for(j=0;j<24;j++){
            cont++;
            band=0;
            do
            {
                dato.edad= rand()%100 ;
                if(dato.provincia==0){
                    dato.provincia=provinciasFacu[i][rand()%10] ;
                } else{
                    band =1;
                }
            } while (band == 0);
        
            dato.legajo=cont;
            dato.sabeIngles=rand()%1;
            dato.nivel=rand()%10;
            
            for(x=0;x<6;x++){
                dato.facultad[x]=facu[i][x];
            }

            fwrite(&dato,sizeof(dato),1,arch);
        }
        printf("se ejecuto %d\n",i);
    /*/
    dato.edad= 0; // numero de 1 a 100 
    dato.ejerc1 = 0;
    dato.vicios = 0;
    dato.antecedentes = 0; 
    dato.ultimaV = 0;
    dato.consumoS = 0;
    fwrite(&dato,sizeof(dato),1,arch);
    printf("termino el for\n");
    fclose(arch);
    system("pause");
    return 0;
}