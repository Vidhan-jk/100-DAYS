/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*


Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
                  printf("\n");  
        }
        else
        for(int j=1;j<=i;j++)
        {
            printf("*\n");
        }
      
    }
    printf("\n");
    int m=3;
     for(int i=1;i<=m;i++)
    {
        
              if(i%2==0)
        {
                  printf("\n");  
        }
        else
        for(int j=m;j>=i;j--)
        {
            printf("*\n");
        }  
    }

    return 0;
}