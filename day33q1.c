
/*Q65: Search in a sorted array using binary search.

Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>

int main() 
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements...");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int se;
    printf("Enter searching element..");
    scanf("%d",&se);
    
   int lb=0;
   int ub=n;
   int mid=0;
   int c=0;
   while(lb<=ub)
   {
      mid=(lb+ ub)/2;
      if(a[mid]<se)
      {
          lb=mid+1;
      }
      if(a[mid]>se)
      {
         ub=mid-1; 
      }
      if(a[mid]==se)
      {
          c=1;
          break;
      }
      
   }
   if(c==1)
   printf("Found at index %d",mid);
   else
   printf("Element not found");

    return 0;
}
