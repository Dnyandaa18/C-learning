#include<stdio.h>

int main()
{
    char choice = '\0';
    float celsius = 0.0;
    float fahrenheit = 0.0;
    printf("Temperature Conversion Program\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n\n");

    printf("The Temperature is in Celsius or Fahrenheit?\n");
    printf("Enter C or F respectively: ");
    scanf("%c", &choice);

    if(choice == 'C')
    {
        printf("Enter the Temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("Converted Temperature in Fahrenheit is: %.2f\n", fahrenheit);
    }
    else if(choice == 'F')
    {
        printf("Enter the Temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit-32) * 5/9;
        printf("Converted temperature in Celsius is: %.2f\n", celsius);
    }
    else{
        printf("Invalid choice!Try again.");
    }

}