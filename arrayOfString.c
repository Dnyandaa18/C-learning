#include <stdio.h>
#include <string.h>
int main()
{
    // Array of Strings

    char fruits[][10] = {"Apple",
                         "Banana",
                         "Cocunut",
                         "Banana"};
    int size = sizeof(fruits) / sizeof(fruits[0]);

    // Change the letters of array by indexes

    fruits[0][0] = 'E';
    fruits[0][4] = 'A';

    for (int i = 0; i < size; i++)
    {
        printf("%s\n", fruits[i]);
    }

    printf("-----Taking User Input-----\n");

    char names[4][25] = {0};
    int rows = sizeof(names) / sizeof(names[0]);
    for (int i = 0; i < rows; i++)
    {
        printf("Enter a name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }
    printf("The names are:");

    for (int i = 0; i < rows; i++)
    {
        printf("%s\n", names[i]);
    }
    return 0;
}