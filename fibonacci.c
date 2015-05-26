#include <stdio.h>
int main(){
    int n, ant1=0, ant2=1, fib=0;
    printf("Introduzca el número que desea ubicar en la serie Fibonacci: ");
    scanf("%d",&n);
    printf("1 ");
    do{
            fib = ant1 + ant2;
            ant1 = ant2;
            ant2 = fib;
            printf("%d ",fib);
    }while(n>fib);
    return 0;
}
