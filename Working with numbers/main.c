#include <stdio.h>
#include <stdlib.h>

int main()
{
    // NEVER FORGET THE FUCKING ;;;;;;;;;;;;;;;;;;;;;;;;;;; at the end of your line otherwise it will not work and this soooooooo annoying :(
    printf("%d \n", 666 + 666); // this is for addition with int number
    printf("%d \n", 666 * 666); // This is for multiplication with int number
    printf("%d \n", 666 / 666); // this is for division with int number
    printf("%f \n", 666.666 + 666.666); // this is for addition with decimal number
    printf("%f \n", 666.666 * 666.666); // this is for multiplication with decimal number
    printf("%f \n", 666.666 / 666.666); // this is for division with decimal number
    // now we can have some issue with other type of operation :
    printf("%d \n", 5 / 4); // the answers is 1 because we choose a int number instead of decimal one.
    printf("%f \n", 5 / 4); // In this case the answer is 0 because you ask decimal number with 2 int number so it's not possible.
    printf("%f \n", 5.0 / 4.0); // In this case the answer is 1.25 and this is the correct result :D CHAMPAGNE...
    // Now we can do that with variable :
    int num = 6;
    printf("%d \n", num); // this is just to print
    // now with function :
    printf("%f \n", pow(2, 3) ); // this operation is 2^3
    printf("%f \n", sqrt(36) ); // this operation is sqrt(36)
    printf("%f \n", ceil(36.356) ); // give the upper number
    printf("%f \n", floor(36.356) ); // give the lower number


    return 0;
}
