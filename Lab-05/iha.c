#include<stdio.h>
int main()
{
    int pulse;
    int rest_heart_rate;

    printf("Take your resting pulse for 10 seconds.\n");
    printf("Enter your pulse rate and press return> ");
    scanf("%d", &pulse);

    rest_heart_rate = pulse * 6;
    printf("Your resting heart rate is %d. \n", rest_heart_rate);

    if(rest_heart_rate > 56)
        printf("Keep up your exercise program!\n");
    else
        printf("Your heart is excellent health!\n");

    return 0;
}
