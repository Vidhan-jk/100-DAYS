/*Q34: Write a program to check if a number is prime.


Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
int main()
{
int n;
printf("Enter number");
scanf("%d",&n);
int c=0;
for(int i=1;i<=n;i++)
{
    if(n%i==0)
    c++;
}
if(c==2)
printf("Prime");
else
printf("Not Prime");
return 0;
}