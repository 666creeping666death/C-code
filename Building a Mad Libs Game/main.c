#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];
    printf("Enter a color:");
    scanf("%s", color);
    printf("Enter a plural sNoun:");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity:");
    scanf("%s%s", celebrityF, celebrityL);

    printf("Roses are %s \n", color);
    printf("%s are blue \n", pluralNoun);
    printf("I love %s %s \n", celebrityF,celebrityL); // we can't have space between the first and last name in this case :
// so we add a new variable, the problem is the program is waiting for this new informations, so we need to do that only if we need to have 2 informations.
// In this case if we enter a celebrity with only 1 name, the program is still waiting...
    return 0;
}
