#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};




int main(){

    struct Student student1;
    student1.age = 666;
    student1.gpa= 666; // yes he is a very good student :D
    strcpy(student1.name, "BILLY"); // this is the string copy function, we use this because we can't have 2 type of element in a array i mean number + strong it is not possible
    strcpy(student1.major, "Physics");

    printf("%s \n", student1.name); // %s is for many character right ? :D  I am not sur but it works so it should be that.
    printf("%d \n", student1.age);
    printf("%s \n", student1.major);
    printf("%f \n", student1.gpa);

    struct Student student2;
    student2.age = 19;
    student2.gpa= 0; // yes he is a very good student :D
    strcpy(student2.name, "BILLY2"); // this is the string copy function, we use this because we can't have 2 type of element in a array i mean number + strong it is not possible
    strcpy(student2.major, "management");

    printf("%s \n", student2.name);
    printf("%d \n", student2.age);
    printf("%s \n", student2.major);
    printf("%f \n", student2.gpa);


    return 0;
}
