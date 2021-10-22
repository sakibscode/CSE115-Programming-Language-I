#include<stdio.h>
int main()
{
    int num;
    float deci;
    char ch;

    printf("Enter a number : ");
    scanf("%d", &num);
    printf("The number is %d\n", num);

    printf("Enter a fractional number : ");
    scanf("%lf", &deci);
    printf("The number is %.2f\n", deci);

    printf("Enter a character : ");
    fflush(stdin);
    scanf("%c", &ch);
    printf("The character is: %c\n", ch);

    return 0;
}
