#include <stdio.h>
int main(){
    int num1;
    printf("introduzca un numero: ");
    scanf("%d", &num1);

    if (num1<=0){
        printf("El numero es negativo.");
    }
    else{
        printf("El numero es positivo.");
    }
    return 0;
}