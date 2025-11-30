/*Q27: Write a program to print the sum of the first n odd numbers.


Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>
int main()
{
int n; int i=1; int sum=0;
printf("Enter the value of n");
scanf("%d",&n);
while(i<=n)
{
    if(i%2!=0)
    {
     sum = sum+i;
    }
i=i+1;
}
printf("Sum=%d",sum);
return 0;
}