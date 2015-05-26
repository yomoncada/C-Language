#include<stdio.h>
int main(){
    int i, n, fact=1;
    printf("Introduzca el número al cual se le calculará su factorial: ");
    scanf("%d",&n);
    if(n<0){
        printf("\nEl número introducido  no es valido.");
        return 0;
    }
    else{
        for(i=n;i>0;i--){
            fact = fact * i;
            if(i>1){
                printf("%d! * ",i);
            }
            else{
                printf("%d!",i);
            }
        }
        printf(" = %d",fact);
    }
    return 0;
}
