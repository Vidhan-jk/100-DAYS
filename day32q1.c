

/*Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

int main() 
{
    int n1;
    printf("Enter size of array1:");
    scanf("%d",&n1);
    int a[n1];
    printf("Enter array1 elements...");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    int n2;
    printf("Enter size of array2:");
    scanf("%d",&n2);
    int b[n2];
    printf("Enter array2 elements...");
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    int p=n1+n2;
    int c[p];
    for(int i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    for(int i=0;i<n2;i++)
    {
        c[n1+i]=b[i];
    }
    printf("Array elements after merging...");
    for(int i=0;i<p;i++)
    {
        printf("%d",c[i]);
    }
   

    return 0;
}
