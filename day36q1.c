/*Q71: Read and print a matrix.


Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/
#include <stdio.h>

int main()
{
    int m ,n;
    printf("Enter rows and columns:");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("Enter array elements:");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
        printf("%d",a[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}