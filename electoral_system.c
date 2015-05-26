#include<stdio.h>
int main(){
    int vot, vota=0, votb=0, votnul=0, gan;
    char canda[20], candb[20];
    printf("Sistema electoral.\n");
    printf("\nIntroduzca el nombre del primer candidato: ");
    scanf("%s",&canda);
    printf("\nIntroduzca el nombre del segundo candidato: ");
    scanf("%s",&candb);
    printf("\n¿Por quién desea votar?\n");
    printf("\nIntroduzca:");
    printf("\n\t0 si no desea votar.");
    printf("\n\t1 si desea votar por %s.",canda);
    printf("\n\t2 si desea votar por %s.\n",candb);
    while(vot!=0){
        printf("Voto: ");
        scanf("%d",&vot);
        if(vot>2){
            votnul++;
        }
        else{
            switch(vot){
                case 1:
                    vota++;
                    break;
                case 2:
                    votb++;
                    break;
            }
        }
    }
    if(vota>votb){
        printf("\nEl ganador de la elección es %s con %d votos.",canda,vota);
    }
    if(vota<votb){
        printf("\nEl ganador de la elección es %s con %d votos.",candb,votb);
    }
    if(vota==votb){
        printf("\nHubo un empate entre el candidato %s y el candidado %s de %d votos.",canda,candb,vota);
    }
    printf("\nLa cantidad de votos fueron: %d",vota+votb+votnul);
    printf("\nLa cantidad de votos nulos fueron: %d",votnul);
    printf("\n");
    return 0;
}
