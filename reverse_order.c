#include<stdio.h>
int main(){
    int i, cant, num;
    printf("¿Cuántos valores desea que el programa lea?: ");
    scanf("%d",&cant);
    printf("\n");
    int valores[cant];
    for(i=0;i<=cant-1;i++){
        printf("Introduzca el valor número %d: ",i+1);
        scanf("%d",&num);
        valores[i] = num;
    }
    printf("\n");
    for(i=cant-1;i>=0;i--){
        printf("%d\t",valores[i]);
    }
    return 0;
}
