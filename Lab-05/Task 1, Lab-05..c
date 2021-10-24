#include<stdio.h>
int main()
{
    char x;
    int S = 255;

    printf("Enter a character : ");
    scanf("%c", &x);

    x^=S;

    printf("Result : %c", x);

    return 0;
}