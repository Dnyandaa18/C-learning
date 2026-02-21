#include <stdio.h>

int main()
{
    int numbers[] = {10, 20, 30, 40, 70};
    // numbers[0] = 100;
    // numbers[1] = 90;
    // numbers[2] = 80;
    // numbers[3] = 100;
    // printf("%d\n", numbers[2]);

   /* printf("%d\n", sizeof(numbers)); // This will display size in bytes.
    printf("%d\n", sizeof(numbers[0]));   */                          
// for (int i = 0; i <= 3; i++)
//     {
//         printf("%d ", numbers[i]);
//     }

int size = sizeof(numbers) / sizeof(numbers[0]);
for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
        
    }


    char grade[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    for (int j = 0; j <= 5; j++)
    {
      
        printf("%c ", grade[j]);
    }

    char name[] = "Bro Code";
    printf("%c\n", name[5]);

    // printf("%d\n", numbers[0]);
    return 0;
}