#include<stdio.h>
int main(){
    int oper;
    float  n1, n2;
    printf("Calculadora básica.\n");
    printf("\n¿Qué operación desea efectuar?\n");
    printf("\nIntroduzca:");
    printf("\n\t1 si desea efectuar una suma.");
    printf("\n\t2 si desea efectuar una resta.");
    printf("\n\t3 si desea efectuar una multiplicación.");
    printf("\n\t4 si desea efectuar una división.\n");
    printf("\nOperación: ");
    scanf("%d",&oper);
    if(oper==0 || oper>4){
        printf("Usted ingresó una opción erronia.");
        return 0;
    }
    else{
        printf("\nIntroduzca el primer valor: ");
        scanf("%f",&n1);
        printf("Introduzca el segundo valor: ");
        scanf("%f",&n2);
    }
    switch(oper){
        case 1:
            printf("\nEl resultado de %f + %f es: %f",n1,n2,n1+n2);
            break;
        case 2:
            printf("\nEl resultado de %f - %f es: %f",n1,n2,n1-n2);
            break;
        case 3:
            printf("\nEl resultado de %d * %f es: %f",n1,n2,n1*n2);
            break;
        case 4:
            printf("\nEl resultado de %d / %f es: %f",n1,n2,n1/n2);
            break;
    }
    return 0;
}
