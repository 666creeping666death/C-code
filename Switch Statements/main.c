#include <stdio.h>
#include <stdlib.h>

int main(){
    char grade;
    printf("Enter your grade : ");
    scanf("%c", &grade);
    /*printf("Your grade is : %c", grade);*/
    switch(grade){
    case'A' :
        printf("Your grade is : The Viper ");
        break;
    case'B' :
        printf("Your grade is : EMMMMMMMBE ");
        break;
    case'C' :
        printf("Your grade is : Dauty man ");
        break;
    case'D' :
        printf("Your grade is : badaboum ");
        break;
    case'F' :
        printf("Your grade is : 11 ");
        break;
    default :
        printf("Grade is not correct.");

    }

    return 0; // we can consider switch in this case like if or else if or else but for character.
}
