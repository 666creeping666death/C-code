#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    /*int num1;
    printf("Enter your secret number to troll your friend :"); // When the program start and we select the number, the program should remove that
    scanf("%d", &num1);
    int guessLimit;
    printf("Enter the number of try you want :");
    scanf("%d" , &guessLimit);

    int secretnumber =num1;
    int guess;
    int guessCount = 1;
    int outofGuesses = guessLimit -1;

    while(guess != secretnumber){
        if(guessCount <= guessLimit){
        printf("Enter your number :");
        scanf("%d", &guess);
        printf("NOPE :D \n");
        printf("Number of try :%d \n", guessCount);
        guessCount++;
        printf("meh : %d \n", outofGuesses);
        outofGuesses = outofGuesses - 1;

        }else{
        outofGuesses == 1
        }
    }
    if( guessCount == guessLimit){ // i know that this is not possible the program do not work, because the guesscount is outside the loop so this is the initial value.
        printf("You lose");
    }else{
        printf("MASTAPIZZA");
    }*/
    /*int objective;
    printf("Enter the objective :");
    scanf("%d", &objective);
    */
    srand((unsigned)time(NULL));
    int my_number = rand() % 10 + 1;

    printf(my_number);

    int guesslimit;
    printf("Enter your limit : \n");
    scanf("%d", &guesslimit);

    int count =1;
    int guess;
    printf("Enter your guess : \n");
    scanf("%d", &guess);

    while (guess != my_number){
        printf("Daut castle \n", &guess);
        if (count == guesslimit){
           break;
        }
        printf("Enter your number : ");
        scanf("%d", &guess);
        count++;
        printf("Number of try : %d \n", count);
    }
    if(count == guesslimit){
        printf("TITANIC");
    } else {
    printf("The Viper in %d", count);
    }
    return 0;
}
