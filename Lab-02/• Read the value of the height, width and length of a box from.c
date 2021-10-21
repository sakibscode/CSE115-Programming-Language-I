#include<stdio.h>
#include<math.h>

int main()
{
    float height, width, length;
    float volume;

    printf("Enter Value Of Height, Width & Length Of The Box: \n");
    scanf("%f%f%f", &height, &width, &length);
    volume = height * width * length;

    printf("\n Volume of box is : %.3f", volume);

    return 0;
}
