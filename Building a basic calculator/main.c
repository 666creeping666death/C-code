#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    printf("Enter first number :");
    scanf("%d", &num1);
    printf("Enter second number :");
    scanf("%d", &num2);

    printf("Answer: %d \n", num1 + num2);
// this in only for int number
    double num3;
    double num4;
    printf("Enter third number :");
    scanf("%lf", &num3);
    printf("Enter fourth number :");
    scanf("%lf", &num4);

    printf("Answer: %f", num3 + num4);
    //this is for float .
    /*float num5;
    float num6;
    printf("Enter fifth number :");
    scanf("%lf", &num5);
    printf("Enter sixth number :");
    scanf("%lf", &num6);

    printf("Answer: %f", num + num4); this is just a try but it didn't work.*/

    return 0;
}
