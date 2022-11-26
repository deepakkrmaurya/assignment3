/*11. Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.*/
#include<stdio.h>
int main()
{
    int math,physics,chemistry,hindi,english,sum,avg;
    printf("inter the subject math physics chemistry hindi and english");
    scanf("%d%d%d%d%d",&math,&physics,&chemistry,&hindi,&english);
     sum=math+physics+chemistry+hindi+english;
    avg=sum/5;
     if(avg>=33)
     {
       printf("pass\n");
     }

    else 
    printf("fall\n");
    printf(" persentage =%d%%\n",avg);
    return 0;
}