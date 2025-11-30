/*Q29: Write a program to calculate the factorial of a number.


Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>
int main()
{
int n;
printf("Enter number:");
scanf("%d",&n);
int i=1;
int f=1;
while(i<=n)
{
    f=f*i;
    i=i+1;
}
printf(" Factorial= %d ",f);
return 0;
}