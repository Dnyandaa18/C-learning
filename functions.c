#include <stdio.h>
#include <string.h>

void happyBirthday(char name[], int age) // in bracket these are pareameters
{
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to Dear %s!", name);
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nYour are %d year old!\n", age);
}

int main()
{
    // Arguments
    /*If you need input for the function you are calling.*/
    char name[50] = "";
    int age = 0;

    printf("Enter your name please:");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; /*These two lines can be used instead of scanf*/

    printf("Enter your age please: ");
    scanf("%d", &age);

    happyBirthday(name, age);
    happyBirthday(name, age); // in bracket they are arguments

    return 0;
}