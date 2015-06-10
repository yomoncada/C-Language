#include<stdio.h>
int main(){
    int i, cant, num;
    pregunta:
    printf("¿Cuántos valores desea que el programa lea?: ");
    scanf("%d",&cant);
    printf("\n");
    if(cant==0){
        printf("¿Usted no quiere introducir ningún elemento?.\n");
        printf("\n");
        goto pregunta;
    }
    else{
        int valor[cant];
        for(i=0;i<=cant-1;i++){
            printf("Introduzca el valor número %d: ",i+1);
            scanf("%d",&num);
            valor[i] = num;
        }
        printf("\n");
        for(i=cant-1;i>=0;i--){
            printf("%d\t",valor[i]);
        }
    }
    return 0;
}
