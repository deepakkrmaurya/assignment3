/*6. Write a program to print greater between two numbers. Print one number if both are
the same.*/
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("inter any number");
    scanf("%d%d",&num1,&num2);
    
    if(num1>num2)
    {
        printf("greater number is %d",num1);
    }
    else
    printf("greater number is %d",num2);
    

    
return 0;

}