#include <stdio.h>
#include <stdlib.h>

int main()
{
    int luckyNumbers[] = {4, 8, 15, 16, 42}; // All the element are store inside the array, we can put thousand of value.
    //                    0  1   2   3   5
    luckyNumbers[1] = 200; // we can change the value. there is not very interesting use of that
    // because this variable don't have name anymore, this is like a normal variable int variable in this case.
    printf("%d \n", luckyNumbers[1]); // the number inside the square bracket is the index of the element in the array.
    int LuckyNumbers[10];// the maximum amount of value is 10
    LuckyNumbers[1] = 666;
    printf("%d \n", LuckyNumbers[1]); // the 1 here is the position in the array, the thing is for now
    // we only have one value in our array, so if we change the index, C will give a value but completely random. Or  we need to give a value
    char phrase[20] = "Array"; //20 is the number of character
    printf("%c", phrase); // this part of the program do not work i don't know why :(
    return 0;
}
