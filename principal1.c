#include <stdio.h>
int main(){
    int num1, num2, num3, num4,num5,num6;
    printf("ingrese un numero: ");
    scanf("%d", &num1);
    printf("ingrese un numero: ");
    scanf("%d", &num2);
    num3=num1+num2;
    num4=num1-num2;
    num5=num1/num2;
    num6=num1*num2;
    printf("Resultado de la suma es: %d \n", num3);
    printf("Resultado de la resta es: %d \n", num4);
    printf("Resultado de la divicion es: %d \n", num5);
    printf("Resultado de la multiplicacion es: %d \n", num6);
    return 0;
}