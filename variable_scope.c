#include <stdio.h>

//int result = 0;//Global scope(hard to debug)

int add(int x, int y)
{
    int result = x + y; //local scope
    return result;
}
int subtract(int x, int y)
{
    int result = x - y; //local scope
    return result;
}

int main()
{
    int result = subtract(3,4);
    printf("%d\n", result);
    return 0;
}