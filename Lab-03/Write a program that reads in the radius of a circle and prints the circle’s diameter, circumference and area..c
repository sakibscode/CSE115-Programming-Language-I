#include<stdio.h>

int main()
{
    double radius;
    printf("Enter the radius of a circle : ");
    scanf("%lf", &radius);

    printf("The Diameter of the circle is %.2lf\n", radius*2);
    printf("The Circumference of the circle is %.2lf\n", 2*3.1416*radius);
    printf("The Area of the circle is %.2lf\n", 3.1416*radius*radius);

    return 0;
}
