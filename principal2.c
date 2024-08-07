#include <stdio.h>
int main(){
    int num1;
    printf("introduzca un numero: ");
    scanf("%d", &num1);

    if (num1 % 2){
        printf("El numero es impar.");
    }
    else{
        printf("El numero es par.");
    }
    return 0;
}