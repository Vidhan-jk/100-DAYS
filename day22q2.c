/*Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.


Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>

int main()
{
int n;
    printf("Enter n:");
    scanf("%d",&n);
    float sum=1;
    for(int i=3;i<=n;i=i+2)
    {
       
        sum = sum+((float)i/(i+1));
    }
printf("Approximate sum= %f",sum);
    return 0;
}