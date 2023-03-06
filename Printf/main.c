#include <stdio.h>
#include <stdlib.h>

int main()
{
    int favNum = 666; // creation of a variable and call it in a printf
    char myChar = 'd'; // creation of character, in this case this is a single character.
    char myarraychar[] = "Benoit est un genie"; // this is for many freaking character.
    printf("%v \n","myarraychar"); // i have a problem with that i should ask to billy :D)
    printf("my favorite %c is %d \n", myChar , favNum); // %c is to print an character
    printf("my favorite number is %d \n", favNum); // %d print a number
    printf("my favorite number is %f \n", 666.666); // %f print a decimal number
    printf("my favorite sport is %s", "swimming \n"); // %s is to add a bit of texte
    printf("Death\n 666"); //the \n is for a new line
    printf("\""); //you can see the " in the text :D



    return 0;
}
