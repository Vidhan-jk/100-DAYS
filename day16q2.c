/*Q32: Write a program to check if a number is a palindrome.


Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>
int main()
{
int n;
printf("Enter number:");
scanf("%d",&n);
int t=n;
int rev=0;
while(t!=0)
{
   int d = t%10;
   rev = rev*10+d;
   t=t/10;
}
if(rev==n)
printf(" Palindrome ");
else
printf("Not Palindrome");
return 0;
}