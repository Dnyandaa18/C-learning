#include <stdio.h>

int main()
{
    int choice = 0;
    float kilograms = 0;
    float pounds = 0;

    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n2. Pounds to Kilograms\n");

    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1)
    // Kilogram to Pounds
    {
        printf("Enter the weight in Kilograms: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f kg in pounds is: %.2f\n", kilograms, pounds);
    }

    else if (choice == 2)
    // Pounds to Kilogram
    {
        printf("Enter the weight in Pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds * 0.4536;
        printf("%.f lbs in Kilograms is: %.2f\n", pounds, kilograms);
    }
    else
    {
        printf("Invalid choice! Please enter 1 or 2\n ");
    }
    return 0;
}