int main (){
    int i, cant, suma=0, menor=150, mayor=0;
    float promedio;
    printf("Indique la cantidad de estudiantes a registrar: ");
    scanf("%d",&cant);
    int edad [cant];
    printf("\n");
    for(i=0;i<=cant-1;i++){
        printf("Indique la edad del estudiante %d :",i+1);
        scanf("%d",&edad[i]);
        suma = suma + edad[i];
        if(edad[i]<menor){
            menor = edad[i];
        }
        if(edad[i]>mayor){
            mayor = edad[i];
        }
    }
    promedio = suma / cant;
    printf("\nLa edad menor es: %d", menor);
    printf("\nLa edad mayor es: %d", mayor);
    printf("\nEl promedio de edad es: %f", promedio);
    return 0;
}
