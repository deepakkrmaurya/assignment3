/*12. Write a program to check whether a given alphabet is in uppercase or lowercase.*/
#include<stdio.h>
int main()
{   char c,chek,ch;
    printf("input a character");
    scanf("%c",&ch);
    chek=ch;
    if((chek>='A')&&(chek<='Z'))
    {
    printf("upper case\n");
    }
    else if((chek>='a')&&(chek<='z'))
    printf("lowercase\n");
    return 0;  
}