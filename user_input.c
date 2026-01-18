#include <stdio.h>
#include<string.h>
int main()
{

    int age = 0;
    float cgpa = 0.0;
    char grade = '\0';
    char name[30];

    /* It is not necessary to asign 0 or null but it
    is a good practice as it will initally be 0. */

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your cgpa: ");
    scanf(" %f", &cgpa);

    printf("Enter your grade: ");
    scanf("  %c", &grade);
    
    getchar(); //newwline for input buffer
    printf("Enter your first name: ");
    fgets(name, 30, stdin); /*instead of 30 here we can write sizeof(name) 
                             so that if we change the size of name here automatically
                              it will get changed
                              It will help avoid to update it manually.
                              Instead of scanf we have used fgets meaning file gets string*/

    printf("Your age is: %d\n", age);
    printf("Your cgpa is: %f\n", cgpa);
    printf("Your grade is: %c \n", grade);
    printf("Your name is: %s\n", name);

    return 0;
}