#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age = 0;
    printf("Enter your age:");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are an adult.\n");
    }

    else if (age < 0)
    {
        printf("You haven't been born yet.\n");
    }

    else if (age == 0)
    {
        printf("You are new born.\n");
    }

    else
    {
        printf("You are a child.\n");
    }

bool isStudent = false;
if(isStudent == true)
{
printf("You are a student");
}
else{
    printf("You are not a student");
}

    return 0;
}