/*17. Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not.*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf(" input the length of the sides of a triangle");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b>c)||(a+c>c)||(b+c>a))
    {
        printf("trangle is valid");
    }
    else
    printf("trangle is not valid");
    return 0;
}