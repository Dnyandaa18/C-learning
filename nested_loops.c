#include <stdio.h>

// int main()
// {
//     for (int i = 1; i < 4; i++) //outer loop
//     {
//         for (int j = 1; j < 10; j++) //inner loop
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// MULTIPLICATION TABLE
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%3d ",i*j);
        }
        printf("\n");
    }

    return 0;
}