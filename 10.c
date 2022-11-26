/*10. Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.*/
//profit=sp-cp
//loss=cp-sp
#include<stdio.h>
int main()
{
    int cp,sp,loss,ss, profit;
    float per;
    printf("inter costptise and selingprise");
    scanf("%d%d",&cp,&sp);
    ss=sp;
    profit=sp-cp;
    per=profit/ss*100;
    printf("persentage=%d",profit/ss);
    // if(profit>0)
    // {
        
    //    printf("profit\n");
    //    printf("%d",per);
    // }
    // else
    // printf("loss\n");

    return 0;
}