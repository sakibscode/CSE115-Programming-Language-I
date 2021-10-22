#include<stdio.h>
int main()
{
    int n, i, sum = 0;

    printf("Input the 10 numberas : \n");

    for(i = 1; i<=10; i++ )
    {
        printf("Number-%d : ", i);
        scanf("%d", &n);
        sum +=n;
    }
    printf("The sum of 10 number is : %d\n", sum);
}
