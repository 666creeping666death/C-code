#include <stdio.h>
#include <stdlib.h>

int main() // main function is a very special function this function call everything we can say that.
{
    // function is just a collection of code you can also call that a method
    printf("Top \n", 6);
    sayHi("Jean-Billy1",6); // we just call our function here.
    sayHi("Jean-Billy2",6);
    sayHi("Jean-Billy3",6);
    sayHi("Jean-Billy4",6);
    sayHi("Jean-Billy5",6);
    sayHi("Jean-Billy6",6); // we can call this function as many times you need (yes i am not that good to invent name)
    printf("Bottom \n"); // these two print are basically here to see the how main function execute the program.
    // we can see that the main function start with printf("Top"); and end by printf("Bottom");
    // so it is from top to bottom :D.
    return 0;
}

void sayHi(char name[], int age){


    printf("Hello %s you are %d\n" , name, age);

}
