#include<stdio.h>
int main()
{
    int a, x, y, S;

    printf("Enter a : ");
    scanf("%d", &a);

    printf("Enter x : ");
    scanf("%d", &x);

    printf("Enter y : ");
    scanf("%d", &y);

    S = ((a<<x)>>y);

    printf("Result : %d", S);

    return 0;
}
