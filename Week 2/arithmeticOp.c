#include<stdio.h>

int main(){
    /*---------- Learn all arithmetic Oparetors as like: + - * / -----------------*/

    int num1, num2, result = 0;

    printf("Enter Value of Number 1: ");
    scanf("%d", &num1);

    printf("Enter Value of Number 2: ");
    scanf("%d", &num2);


    result = num1 + num2;
    printf("Result of Sum: %d + %d = %d \n",num1, num2, result);

    result = num1 - num2;
    printf("Result of Sub: %d - %d = %d\n", num1, num2, result);

    result = num1 * num2;
    printf("Result of Mult: %d * %d = %d\n", num1, num2, result);

    result = num1 / num2;
    printf("Result of Div: %d / %d = %d\n", num1,num2,result);

    return 0;
}