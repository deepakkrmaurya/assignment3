/*9. Write a program to find the greatest among three given numbers. Print number once
if the greatest number appears two or three times.*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("inter any  three number");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(a>c))
    {
        printf("greatest number=%d",a);
    }
    else if((b>a)&&(b>c))
    {
        printf("greatest number=%d",b);
    }
    else
    printf("greatest number=%d",c);
    
return 0;
}