#include <stdio.h>

int main()
{
    int numbers[][3] = {{1, 2, 3}, // The 3 in [] indicates there will be three columns
                        {4, 5, 6},
                        {7, 8, 9},
                        {10,11,12}};

    //    printf("%d ", numbers[0][0]);
    //    printf("%d ", numbers[0][1]);
    //    printf("%d", numbers[0][2]);

    for (int i = 0; i < 4; i++) // rows
    {
        for (int j = 0; j < 3; j++) // columns
        { 
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

char numpad[][3] = {{'1', '2', '3'},
                    {'4', '5', '6'},
                    {'7', '8', '9'},
                    {'*', '0', '#'}};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c ", numpad[i][j]);
        }
        printf("\n");
    }

    return 0;
}