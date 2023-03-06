#include <stdio.h>
#include <stdlib.h>

double cube(double num){ // when I said the title i mean this part
    /*double num;
    printf("Enter your num :");
    scanf("%lf \n" &num);*/ //meh.
    double result = num*num*num; // very important to make the function before the main function
    return result;// and it seems logic because when the main function try to call the function,the main function do not know the function (for now the cube function do no exist for the main function)
} // or we need to call the signature of the function (the title of the function it mean the first line)


int main()
{
    double value;
    printf("Enter your value : ");
    scanf("%lf", &value); //%lf is for double.
    printf("Your value is %lf \n", value);
    /*double value;
    printf("Enter your value :");
    scanf("%f \n", &value);
    printf("Answers: %f", value, cube(value));*/ // I have tried this but it do not work
    printf("Answers: %f", cube(value)); // we just create a function which calculate the cube of a number.
    return 0;
    // Now it works 11
}
