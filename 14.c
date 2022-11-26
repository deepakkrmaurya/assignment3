/*14. Write a program to check whether a given number is divisible by 7 or divisible by 3.*/
#include<stdio.h>
int main()
{
    int n;
    printf("inter any number");
    scanf("%d",&n);
    if((n%3==0)&&(n%7==0))
    printf(" number is divisible by 3 or 7  ");
    else 
    printf(" not divisible by 3or 7  ");
    return 0;
}