#include<stdio.h>
int main(){
    int cant;
    float cost, fact=0;;
    while(cant!=0){
        printf("Ingrese la cantidad de articulos vendidos: ");
        scanf("%d",&cant);
        if(cant>0){
            printf("Ingrese el costo del articulo: ");
            scanf("%f",&cost);
            fact = fact + (cant * cost);
        }
        else{
            printf("\nEl precio a pagar es: %f",fact);
        }
    }
    return 0;
}
