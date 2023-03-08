#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;
    char op;

    printf("Enter a number : ");
    scanf("%lf", &num1);
    printf("Enter operator : ");
    scanf(" %c", &op);
    printf("Enter a number : ");
    scanf("%lf", &num2);

    if(op =='+'){
        printf("The Answer is : %f", num1 + num2);
    }else if(op == '-' ){
        printf("The Answer is : %f", num1 - num2);
    }else if(op == '*'){
        printf("The Answer is : %f", num1 * num2);
    }else if(op == '/' ){
        printf("The Answer is : %f", num1 / num2);
    }else{
        printf("Error");
    }
    return 0;
}
// This is a calculator :D nice to meet you
