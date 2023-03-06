#include <stdio.h>
#include <stdlib.h>
// We are going to do the MAX function

int max(int num1 , int num2 , int num3){
    int resultmax; // we just create an integer to define ? our result i am not sur but i understand like that so fuck this...
    if(num1 >= num2 && num1 >= num3){
        resultmax = num1;
    }else if(num2 >= num1 && num2 >= num3){
        resultmax = num2;
    } else {
            resultmax = num3;
            }
    return resultmax;

}

int min(int num3, int num4, int num5){
    int resultmin;
    if(num3 <= num4 && num3 <= num5){
        resultmin = num3;
    }else if(num4 <= num3 && num4 <= num5){
        resultmin = num4;
    }else{
        resultmin = num5;
        }
    return resultmin;
}
int main()
{
    int n1;
    printf("Enter your first number :");
    scanf("%d", &n1);
    printf("Your value is %d \n", n1);
    int n2;
    printf("Enter your second number :" );
    scanf("%d", &n2);
    printf("Your value is %d \n", n2);
    int n3;
    printf("Enter your third number :" );
    scanf("%d", &n3);
    printf("Your value is %d \n", n3);
    printf("MAX Answers is : %d \n" , max(n1, n2, n3)); // it works for number but YOU ARE the input and now it work for all the number 11
    printf("MIN Answers is : %d  " , min(n1, n2, n3)); // it works for all the number :D
    return max;
}
