#include<stdio.h>
int main(){
    int i, sign=-1, cambsign=2, suma;
    for(i=2;i<=26;i++){
        suma = sign * i;
        printf("%d\t",suma);
        if(cambsign==2){
            sign = sign * -1;
            cambsign=0;
        }
        cambsign++;
        i = i + 2;
    }
    return 0;
}
