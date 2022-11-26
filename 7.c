/*7. Write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots*/
#include<stdio.h>
int main()
{
    double c,b,a,x;
    printf("inter a,b,c");
    scanf("%lf%lf%lf",&a,&b,&c);
    x=b*b-4*a*c;
    if(x>0)
    {
        printf("real &distinct");
    }
    
    else if(x==0)
    {
        printf("real &distinct");
    }
    else
     printf("real & equal");
return 0;
}