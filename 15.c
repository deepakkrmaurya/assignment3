/*15. Write a program to check whether a given number is positive, negative or zero.*/
#include<stdio.h>
int main()
{
    int n;
    printf("inter a number");
    scanf("%d",&n);
    if(n>=0)
    {
      if(n==0)
      {
        printf("number is 0");
      }
      else
      printf("number is positive");
    }
   else
   printf("number is negative");
}