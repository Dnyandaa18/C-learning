#include <stdio.h>
// #include <string.h>
#include <stdbool.h>

// int main()
// {
//     int number = 0;
//     do
//     {
//         printf("Enter a number greater than 0: ");
//         scanf("%d", &number);
//     } while (number < 0);
//     return 0;
// }



// int main()
// {
//     char name[50] = "";
//     printf("Enter your name: ");
//     fgets(name, sizeof(name), stdin);
//     name[strlen(name) - 1] = '\0';

//     while (strlen(name) == 0)
//     {
//         printf("Name cannot be empty! Please enter your name: ");
//         fgets(name, sizeof(name), stdin);
//         name[strlen(name) - 1] = '\0';
//     }
//     printf("Hello %s!\n", name);
//     return 0;
//}

int main()
{
    bool isRunning = true;
    char response = '\0';

    while(isRunning)
    {
        printf("You are Playing a game.\n");
        printf("Would you like to continue(y or n?):");
        scanf(" %c", &response);

        if(response !='Y' && response!='y'){
            isRunning=false;
        }
    }
    printf("You exit the game. Thanks!\n");
    return 0;
}