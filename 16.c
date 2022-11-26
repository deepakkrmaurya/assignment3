/*16. Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.*/
/*48to57  =0to9*/
#include<stdio.h>
int main()
{   char c,chek,ch;
    printf("input a character");
    scanf("%c",&ch);
    chek=ch;
    if((chek>=48)&&(chek<=57))
    {
    printf("digit\n");
    }
    
    printf("special character\n");
    return 0;  
}