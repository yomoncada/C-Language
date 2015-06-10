#include<stdio.h>
#define tam 100
int main(){
    int i, num, cant, valor[tam];
    for(i=0;i<=tam-1;i++){
        valor[i] = i + 1;
    }
    pregunta://Se declara este parrafo como "pregunta".
    printf("¿Cuántos valores desea que el programa lea?: ");
    scanf("%d",&cant);
    printf("\n");
    if(cant<2 || cant>50){
        printf("La cantidad mínima de valores que pueden ser ingresado son 2 y la mayor son 50.");
        printf("\n");
        goto pregunta;//"goto" significa "ir a" en este caso pregunta.
    }
    else{
        for(i=0;i<=cant-1;i++){
            printf("Introduzca el valor número %d: ",i+1);
            scanf("%d",&num);
            valor[i*2+1] = num;
        }
        for(i=0;i<=tam-1;i++){
            printf("\nValor: %d\tPosición: %d",valor[i],i+1);
        }
    }
    return 0;
}
