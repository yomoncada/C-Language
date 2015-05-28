#include <stdio.h>
int main(){
    int i, a=0, b=1, c=0, d=0, alder=0, alrev=0, acumder=0, acumrev=0;
    printf("Esta es la secuencia Fibonacci hasta el elemento 20 al derecho:\n");
    printf("%d %d ",a,b);
    for(i=1;i<=18;i++){
        alder = a + b;
        a = b;
        b = alder;
        printf("%d ",alder);
        acumder++;
        if(acumder==18){
            c = a;
            d = b;
            printf("\n");
            printf("\nEsta es la secuencia Fibonacci hasta el elemento 20 al réves:\n");
            printf("%d %d ",alder,a);
            for(i=18;i>=1;i--){
                alrev = d - c;
                d = c;
                c = alrev;
                printf("%d ",alrev);
                acumrev++;
                if(acumrev==18){
                    return 0;
                }
            }
        }
    }
}
