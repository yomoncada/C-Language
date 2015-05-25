#include<stdio.h>
int main(){
    int i, n, c1, c2, c3, temp, suma;
    printf("Ingrese un número entero: ");
    scanf("%d",&n);
    if(n==0){
        printf("No existen números Armstrong.");
        return 0;
    }
    else{
        printf("Los números Armstrong hasta %d son: ",n);
    }
    for(i=1;i<=n;i++){
        suma = (i * i * i);
        if(i>=10 && i<=99){
            c1 = i / 10;
            c2 = i % 10;
            suma = (c1 * c1 * c1) + (c2 * c2 * c2);
        }
        if(i>=100 && i<=999){
            c1 = i / 100;
            temp = i % 100;
            c2 = temp / 10;
            c3 = temp % 10;
            suma = (c1 * c1 * c1) + (c2 * c2 * c2) + (c3 * c3 * c3);
        }
        if(suma==i){
            printf("%d ",i);
        }
    }
    return 0;
}
