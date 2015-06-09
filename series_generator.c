#include <stdio.h>
int main(){
    int i, tam, num;
    char resp;
    printf("¿Cuantos números de largo será su serie?: ");
    scanf("%d",&tam);
    printf("\n");
    int serie[tam];
    for(i=0;i<=tam-1;i++){
        printf("Introduzca el número de la posición %d en su serie: ",i+1);
        scanf("%d",&num);
        serie[i] = num;
    }
    system("pause");
    system("cls");
    for(i=0;i<=tam-1;i++){
        pregunta:
        printf("¿El número de la posición %d cuyo valor es %d es negativo?.(S/N): ",i+1,serie[i]);
        scanf("%s",&resp);
        if(resp=='s' || resp=='n' || resp=='S' || resp=='N'){
            if(resp=='s' || resp=='S'){
                serie[i] = serie[i] * -1;
            }
            else{
                serie[i] = serie[i];
            }
        }
        else{
            printf("\nLa respuesta es invalida.\n");
            printf("\n");
            goto pregunta;
        }
    }
    system("pause");
    system("cls");
    printf("La serie generada es:\n");
    for(i=0;i<=tam-1;i++){
        printf("%d\t",serie[i]);
    }
    return 0;
}
