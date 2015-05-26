#include<stdio.h>
int main(){
    float l1, l2, l3;
    printf("Introduce el primer lado del triángulo: ");
    scanf("%f",&l1);
    printf("Introduce el segundo lado del triángulo: ");
    scanf("%f",&l2);
    printf("Introduce el tercer lado del triángulo: ");
    scanf("%f",&l3);
    if(l1<1 || l2<1 || l3<1){
        printf("\nUno o más lados ingresados no tienen longitud positiva, por lo tanto no puede formarse un triángulo.\n");
        return 0;
    }
    else{
        if(l1==l2){
            if(l2==l3){
            printf("\nEl triángulo es equilátero.");
            }
            else{
                printf("\nEl triángulo es isósceles.");
            }
        }
        else if(l2==l3){
            printf("\nEl triángulo es isósceles.");
        }
        else{
            printf("\nEl triángulo es escaleno.");
        }
    }
    return 0;
}
