#include<stdio.h>

int main()
{
    int a, b, c, min;
    printf("Enter Three Numbers : ");
    scanf("%d%d%d", &a, &b, &c);

    if( (a<b) && (a<c))
    {
        min = a;
    }
    else if(b<c)
    {
        min = b;
    }
    else
    {
        min = c;
    }

    printf("Min of %d, %d and %d is : %d", a, b, c, min);

    return 0;
}
