/*3. Write a program to check whether a given number is an even number or an odd
number.*/
#include<stdio.h>
int main()
{
    int num;
    printf("inter any number");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("number is even ");
    }
    else
    printf("number is odd");
    return 0;

}