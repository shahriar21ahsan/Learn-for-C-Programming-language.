#include<stdio.h>

int main(){
    int num1, num2;
    printf("Enter Frist value: ");
    scanf("%d", &num1);

    printf("Enter second value: ");
    scanf("%d", &num2);

    // this relation is equal (==)
    if(num1 == num2){
        printf("Equal !\n");
    }
    else{
        printf("Not Equal !\n");
    }

    // this relation is Not equal (!=)
    if(num1 != num2){
        printf("Not Equal !\n");
    }
    else{
        printf("Equal !\n");
    }

    // this relation is greater (>)
    if(num1 > num2){
        printf("Frist value is greater !\n");
    }
    else{
        printf("Invalied!\n");
    }

    // this relation is less then (<)
    if(num1 < num2){
        printf("Frist value is less !\n");
    }
    else{
        printf("Invalid!\n");   
    }

    // this relation is greater or equal (>=)
    if(num1 >= num2){
        printf("Frist value is greater or equal!\n");
    }
    else{
        printf("Invalied!\n");
    }

    // this relation is less or equal (<=)
    if(num1 <= num2){
        printf("First value is less or equal!\n");
    }
    else{
        printf("Invalied!\n");
    }

    
    return 0; 
}