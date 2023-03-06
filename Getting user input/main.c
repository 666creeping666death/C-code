#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int age;
    printf("Enter your age : ");
    scanf("%d", &age); // & is a pointer don't be afraid benoit tell you that
    printf("You are %d years old \n", age); // don't forget to put variable in the print... but it's fine.

    double gpa;
    printf("Enter your gpa : "); //
    scanf("%lf", &gpa); //%lf is for double.
    printf("Your gpa is %f \n", gpa);

    char grade; // Now we want to create the same thing but, for a character.
    printf("Enter your grade : "); //
    scanf(" %c", &grade); //REMINDER %c is for character
    printf("Your grade is %c \n", grade); // So one very important thing : when you put \n he is "save" to the next line, so we should put a space between
    // " and %c to delete the information, But we are not sur...
*/
    char name[20]; // the number mean the number of character you can store.
    printf("Enter your name :"); //
    fgets( name , 20, stdin); // We have changed the function from scanf to fgets because we want to see the space when we type the name
    //stdin mean standard input. the number is the number max of character we can choose, and the fgets function only work with string.
    printf("Your name is %s DEATH", name); // the problem of fgets is : you automatically have a new line that you don't want.

    return 0;
}
// This program is here to create the equivalent of a /input in python.
