/*Q62: Reverse an array without taking extra space.

Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements...");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     int start=0;
     int end =n-1;
     while(start<end)
     {
        int temp= a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
     }
     for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
      return 0; 
    
}