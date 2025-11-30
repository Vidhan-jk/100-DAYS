/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.


Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>

int main() 
{
    int t;
    printf("Enter time in seconds:");
    scanf("%d",&t);
    int hours=t/3600;
    int rem = t%3600;
    int mins=rem/60;
    int sec = rem%60;
    printf("Hours=%d",hours);
    printf("Mins=%d",mins);
    printf("Seconds=%d",sec);

    return 0;
}