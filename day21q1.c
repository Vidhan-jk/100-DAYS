/*Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>

int main() 
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int d = log10(n);
    int fd = n/(int)pow(10,d);
    int ld = n%10;
    n=n%(int)pow(10,d);
    int mid=n/10;
    int new = ld*(int)pow(10,d)+(mid*10)+fd;
     printf("%d",new);

    return 0;
}