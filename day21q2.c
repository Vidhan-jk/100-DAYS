/*Q42: Write a program to check if a number is a perfect number.


Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
//Perfect number-Sum of factors excluding the  number is equal to the number.
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    if(sum==n)
    printf("Perfect Number");
    else
    printf("Not Perfect Number");

    return 0;
}