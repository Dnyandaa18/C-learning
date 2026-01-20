#include<stdio.h>


int main()
{
    //Shopping cart program

    char item[50] = "";
    float price = 0.0;
    int quantity = 0;
    char currency = '$';
    float total = 0.0;


    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);

    printf("What is the price of each item? ");
    scanf("%f", &price );

    printf("How many would you like to buy? ");
    scanf("%d", &quantity);

    total = price * quantity;
    printf("You have bought %d %s.", quantity, item);
    printf("Your total amount is %c%.2f \n", currency,total);

    return 0;
}