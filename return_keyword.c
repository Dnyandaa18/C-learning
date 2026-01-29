// #include <stdio.h>

// /*Here in this function we will be returning integer so
// we will replace void by int*/

// int square(int num)
// {
//     int result = num * num;
//     return result;
// }
// int main()
// {
//     int x = square(2);
//     int y = square(3);
//     int z = square(4);

//     printf("%d\n", x);
//     printf("%d\n", y);
//     printf("%d\n", z);
//     return 0;
// }

#include <stdio.h>

int getMax(int x, int y)
{
    if (x >= y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    int max = getMax(4, 5);
    printf("%d", max);

    return 0;
}