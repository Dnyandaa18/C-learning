#include <stdio.h>
#include <stdbool.h>

// void hello(char name[], int age);//function prototype

// int main()
// {
//     hello("Dnyanda", 20);
//     return 0;
// }

// void hello(char name[], int age)
// {
//     printf("Hello %s.\n", name);
//     printf("You are %d years old.\n", age);
// }

bool ageCheck(int age);

int main()
{
if(ageCheck(14))
{
    printf("You are old enought to work here");
}
else{
    printf("You can not work here.\n");
}
    return 0;
}

bool ageCheck(int age)
{
    return age>=16;
}