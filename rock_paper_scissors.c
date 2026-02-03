#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function prototypes
int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice); // function with return-type

int main()
{
    srand(time(NULL)); // use as a seed to generate pseudo random numbers.
    printf("***ROCK PAPER SCISSORS***\n");

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    switch (userChoice)
    {
    case 1:
        printf("You chose Rock!\n");
        break;
    case 2:
        printf("You chose Papers!\n");
        break;
    case 3:
        printf("You chose Scissors!\n");
        break;
    }

    switch (computerChoice)
    {
    case 1:
        printf("Computer chose Rock!\n");
        break;
    case 2:
        printf("Computer chose Papers!\n");
        break;
    case 3:
        printf("Computer chose Scissors!\n");
        break;
    }

    checkWinner(userChoice,computerChoice);
    return 0;
}

int getComputerChoice()
{
    return (rand() % 3) + 1;
}
int getUserChoice()
{
    int choice = 0;
    do
    {
        printf("Choose an correct option:\n");
        printf("1. Rock\n2. Paper\n3. Scissors\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 3);
    return choice;
}
void checkWinner(int userChoice, int computerChoice)
{
    if(userChoice == computerChoice)
    {
        printf("It's a TIE!\n");
    }
    // else if(userChoice == 1 && computerChoice == 3)
    // {
    //     printf("You WIN!");
    // }
    // else if(userChoice == 2 && computerChoice == 1)
    // {
    //     printf("You WIN!");
    // }
    // else if(userChoice == 3 && computerChoice == 2)
    // {
    //     printf("You WIN!");
    // }

    else if((userChoice == 1 && computerChoice == 3) ||
            (userChoice == 2 && computerChoice == 1) ||
            (userChoice == 3 && computerChoice == 2))
    {
        printf("You WIN!\n");
    }
    else{
        printf("You LOOSE:(\n");
    }
}