#include<stdio.h>
int main(){
    int i, n=0, result, suma=0;
    for(i=1;i<=1000;i++){
            result = (2 * n) + 1;
            suma = suma + result;
            n++;
            printf("%d\t",result);
    }
    return 0;
}
