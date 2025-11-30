/*Q68: Delete an element from an array.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements..");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int p;
    printf("Enter position of element to be deleted...");
    scanf("%d",&p);
    for(int i=p+1;i<n;i++)
    {
        a[i-1]=a[i];
    }
    n--;
    printf("Elements after deletion...");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}