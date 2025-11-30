/*Q43: Write a program to check if a number is a strong number.

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
//Strong number-Sum of factorial of digits is equal to number.
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int temp=n;
    int sum=0;
    int f=1;
    while(temp!=0)
    {
        int d = temp%10;
        for(int i=1;i<=d;i++)
        {
            f=f*i;
        }
        sum=sum+f;
        temp=temp/10;
        f=1;
    }
    if(sum==n)
    printf("Strong Number");
    else
    printf("Not Strong Number");

    return 0;
}