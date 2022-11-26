/*5. Write a program to check whether a given number is a three digit number or not.*/
#include<stdio.h>
int main()
{
    int num,count,a;
    printf("inter any number");
    scanf("%d",&num);
    if((num>99)&&(num<999))
    {
        printf("number is three digit");
    }
    else
    printf("number is two digit");
    return 0;

}