#include<stdio.h>

int main()
{
    float miles, kms;

    printf("Enter distance in miles: ");
    scanf("%f", &miles);

    kms = 1.609 *miles;
    printf("That equals %f km. \n", kms);

    return 0;
}
