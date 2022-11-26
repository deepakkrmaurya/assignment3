/*18. Write a program which takes the month number as an input and display number of
days in that month.*/
#include<stdio.h>
int main()
{
    int n;
     int year;
    printf(" 1:january\n");
     printf(" 2:february\n");
      printf(" 3:march\n");
       printf(" 4:april\n");
        printf(" 5:may\n");
         printf(" 6:june\n");
          printf(" 7:july\n");
           printf(" 8:august\n");
            printf(" 9:september\n");
             printf(" 10:october\n");
             printf(" 11:november\n");
             printf(" 12:december\n");
             printf("................................................................................\n");
             printf("chose the month\n");
             printf("..................................................................................");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            printf("31 day in january");
        break;
        case  2: 
                   
             printf("inter the year");
             scanf("%d",&year);
             if((year%4)&&(year%400==0))
                 printf("28 day in february");
                 else
                 printf("29 day in frbruary");
        break;
        case 3:
            printf("31 day in march");
        break;
        case 4:
            printf("30 day in april");
        break;
        case 5:
            printf("31 day in may");
        break;
        case 6:
            printf("30day in june");
        break;
        case 7:
            printf("31 day in july");
        break;
        case 8:
            printf("31 day in august");
            break;
            case 9:
            printf("30 day in september");
        break;
        case 10:
            printf("31 day in october");
        break;
        case 11:
            printf("30 day in november");
        break;
        case 12:
            printf("31 day in december");
        break;
        default:
        printf("inviled number");
        
        
        

      return 0;
    }
}