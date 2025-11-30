/*Q49: Write a program to print the following pattern:
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
    int p;
    int q=n;
    for(int i=1;i<=n;i++)
    {
        p=q;
        for(int j=1;j<=i;j++)
        {
          printf("%d ",p);
          p++;
        }
        printf("\n");
        q=q-1;
    }

    return 0;
}