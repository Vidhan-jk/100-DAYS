/*Q33: Write a program to check if a number is an Armstrong number.


Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>
int main()
{
int n;
printf("Enter number");
scanf("%d",&n);
int temp =n;
int c=0;
int sum=0;
int t =n;
while(temp>0)
{
temp=temp/10;
c=c+1;
}
while(n>0)
{
int d=n%10;
sum = sum+pow(d,c);
n=n/10;
}
if(sum==t)
printf("Armstrong");
else
printf("Not Armstrong");
return 0;
}