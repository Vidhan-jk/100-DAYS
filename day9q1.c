/*Q17: Write a program to find the roots of a quadratic equation and categorize them.


Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/

#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    printf("Enter the coefficients of a ,b and c:");
    scanf("%d%d%d",&a,&b,&c);
    float root1=0.0;
    float root2=0.0;
    int dis=0;
    dis = (b*b)-(4*a*c);
    if(dis>0)
    {
    root1=(-b+sqrt(dis))/(2*a);
    root2=(-b-sqrt(dis))/(2*a);
    printf("\n Roots are real and distinct = %f  %f",root1,root2);
    }
    else if(dis==0)
    {
        float root = -b/(2*a);
         printf("\n Roots are real and same = %f",root);
        
    }
    else
    printf("\n Roots are complex");

    return 0;
}