/*2. Write a program to check whether a given number is divisible by 5 or not*/
#include<stdio.h>
int main()
{
    int num;
    printf("inter any number");
    scanf("%d",&num);
    if(num%5==0)
    {
        printf("divisible by 5 ");
    }
    else
    printf("not devisible by 5");
    return 0;

}