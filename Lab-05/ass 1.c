#include<stdio.h>

int main()
{
    int a, b, carry=0, count=0;

     scanf("%d %d", &a, &b);

     while(a!=0 && b!=0)
     {
         int x=a%10;
         int y=b%10;
         a/=10;
         b/=10;
         if(x+y+carry>9)
         {
             count++;
             carry=1;
         }
         else
            carry=0;
     }
     if(count==0)
        printf("No carry operation.");
     else if(count==1)
        printf("1 carry operation.");
     else
        printf("%d carry operations.", count);

     return 0;
}
