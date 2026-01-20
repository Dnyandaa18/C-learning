#include <stdio.h>
#include <math.h>

int main()
{
    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;

    printf("Enter the Radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    printf("The area is: %.3lf \n", area);

    surfaceArea = 4 * PI * pow(radius, 2);
    printf("The surface area of circle is: %.3lf \n", surfaceArea);

    volume = (4.0/3.0) * PI * pow(radius, 3); //should use 4.0 and 3.0 to avoid integer division
    printf("Volume of circle is: %.3lf\n",volume);

    return 0;
}
