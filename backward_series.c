#include<stdio.h>
int main(){
    int i, signder=-1, signrev=1, cambsignder=2, cambsignrev=2, alder, alrev, acumder=0, acumrev=0;
    printf("Esta es la serie al derecho:\n");
    for(i=2;i<=26;i++){
        alder = signder * i;
        printf("%d\t",alder);
        if(cambsignder==2){
            signder = signder * -1;
            cambsignder=0;
        }
        cambsignder++;
        i = i + 2;
        acumder++;
        if(acumder==9){
            printf("\n");
            printf("\nEsta es la serie al réves:\n");
            for(i=26;i>=2;i--){
                    if(cambsignrev==2){
                        signrev = signrev * -1;
                        cambsignrev=0;
                    }
                alrev = signrev * i;
                printf("%d\t",alrev);
                cambsignrev++;
                i = i - 2;
                acumrev++;
                if(acumrev==9){
                    return 0;
                }
            }
        }
    }
}
