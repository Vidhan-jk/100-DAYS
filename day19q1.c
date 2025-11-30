/*
Q37: Write a program to find the LCM of two numbers.

Sample Test Cases:
Input 1:4

4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
      
#include <stdio.h>
int main()
{
int a ,b ;
int i=2;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
int LCM;
while(i<=(a*b))
{
if(i%a==0&&i%b==0)
{
    LCM=i;
    break;
}
i=i+1;
}
printf("LCM=%d",i);

return 0;
}