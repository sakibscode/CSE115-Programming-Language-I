#include<stdio.h>   //printf, scanf definitions

int main(void)
{
    float miles, kms;   //variables

    //Get the distance in miles
    printf("Enter distance in miles: ");
    scanf("%f", &miles);

    //Convert the distance in kilometers
    kms = 1.609 * miles;

    //Display the distance in kilometers
    printf("That equals %f km. \n", kms);

    return 0;
}
