#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 5;
    printf("%d\n", num);
    num = 8; // we can modify our variable
    printf("%d \n", num);
    // Now we are going to do constant thing :
    /*const int NUM = 666;
    printf("%d\n", NUM);
    NUM = 8; // we can't modify our variable (red square)
    printf("%d \n", NUM);*/
    printf("Hello \n"); // this can be consider like a constant.
    printf("%d", 70); // 70 in this place can also be consider like constant, because you need to modify physically
    return 0;
}
