/*
Q21: Write a program to display the month name and number of days using switch-case for a given month number.


Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/
#include <stdio.h>

int main()
{
    int m;
    printf("Enter month number:");
    scanf("%d",&m);
    switch(m)
    {
        case 1:
        if(m==1)
        {
            printf("January , 31 days");
        }
        break;
         case 2:
        if(m==2)
        {
            printf("February , 28 days");
        }
        break;
         case 3:
        if(m==3)
        {
            printf("March , 31 days");
        }
        break;
         case 4:
        if(m==4)
        {
            printf("April , 30 days");
        }
        break;
         case 5:
        if(m==5)
        {
            printf("May , 31 days");
        }
        break;
         case 6:
        if(m==6)
        {
            printf("June , 30 days");
        }
        break;
         case 7:
        if(m==7)
        {
            printf("July , 31 days");
        }
        break;
         case 8:
        if(m==8)
        {
            printf("August , 31 days");
        }
        break;
         case 9:
        if(m==9)
        {
            printf("September , 30 days");
        }
        break;
         case 10:
        if(m==10)
        {
            printf("October , 31 days");
        }
        break;
         case 11:
        if(m==11)
        {
            printf("November , 30 days");
        }
        break;
         case 12:
        if(m==12)
        {
            printf("December , 31 days");
        }
        break;
        default:
        printf("Invalid Input");
        break;
    }

    return 0;
}