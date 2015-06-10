#include<stdio.h>
int main(){
    int i, num, cant, producto=1, suma=0;
    pregunta:
    printf("Introduzca la cantidad de valores que desea ingresar: ");
    scanf("%d",&cant);
    if(cant<10){
        printf("\nLa cantidad debe ser mayor o igual a 10 para efectuar correctamente la operación.\n");
        printf("\n");
        goto pregunta;
    }
    else{
        int valor[cant];
        printf("\n");
        for(i=0;i<=cant-1;i++){
            printf("Introduzca el valor número %d: ",i+1);
            scanf("%d",&num);
            valor[i] = num;
        }
        for(i=0;i<=5-1;i++){
            suma = suma + valor[i];
        }
        for(i=cant-1;i>=cant-5;i--){
            producto = producto * valor[i];
        }
        printf("\nLa suma de los primeros cinco valores es: %d",suma);
        printf("\nEl producto de los ultimos cinco valores es: %d",producto);
        return 0;
    }
}
