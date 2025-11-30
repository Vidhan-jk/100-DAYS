/*
Q40: Write a program to find the 1’s complement of a binary number and print it.
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>
void bin(int);

int main() 
{
    int a;
   printf("Enter a binary number:");
   scanf("%d",&a);
   bin(a);
    return 0;
}
void bin(int n)
{
    if(n==0)
    printf("");
    else
    {
        int r=n%10;
        if(r==0)
        {
        bin(n/10);
        printf("1");
        }
        else
        {
         bin(n/10);
        printf("0");
        }
    }
}