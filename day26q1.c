/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345

Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/
#include <stdio.h>

int main()
{
    int n=5;
    int p=n;
    int q;
    for(int i=1;i<=n;i++)
    {
        q=p;
        for(int k=n-1;k>=i;k--)
        {
            printf("  ");
        }
         for (int j=i;j>=1;j--)
         {
             printf("%d ",q);
             q++;
         }
         printf("\n");
         p=n-i;
    }

      return 0;
}