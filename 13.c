/*13. Write a program to check whether a given number is divisible by 3 and divisible by 2.*/
#include<stdio.h>
int main()
{
    int n;
    printf("inter any number");
    scanf("%d",&n);
    if(n%3==0)
    printf(" 3 is divisible by  ");
    else if(n%2==0)
    printf(" 2 is divisible by  ");
    return 0;
}