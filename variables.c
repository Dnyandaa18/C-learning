#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age = 19;

    printf("You are %d years old.\n", age);

    // Change with of 19
    printf("You are %4d years old.\n", age);

    int year = 2025;
    printf("In the year %d.\n", year);

    float cgpa = 10.00;
    printf("Your cgpa is: %f\n", cgpa);

    // To decide how many digits should be displayed after dot

    printf("Your cgpa is: %.2f\n", cgpa);

    // To display price

    float price = 99.99;
    printf("Price of your watch is $ %.2f\n", price);

    // Use of double datatype

    double pi = 3.1415926535879;
    printf("The value of pi is:  %lf\n", pi);
    printf("The value of pi with 14 points after decimal: %.15lf\n", pi);

    // Use of character

    char grade = 'A';
    printf("You have scored grade: %c\n", grade);

    // Display array of characters

    char name[] = "Bro Code";
    printf(" Learning c from  %s \n", name);

    char email[] = "something77@gmail.com";
    printf("Your email is: %s \n", email);

    // boolean datatype
    bool isonline = false;
    printf("You are online: %d\n", isonline);

    // Boolean using else if statement

    bool isOnline = 0;
    if (isOnline)
    {
        printf("You are online");
    }
    else
    {
        printf("You are offline\n");
    }

    // same case another output
    bool isOn = true;
    if (isOn)
    {
        printf("You are online\n");
    }
    else
    {
        printf("You are offline");
    }

    return 0;
}