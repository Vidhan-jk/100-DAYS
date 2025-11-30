/*Q60: Count positive, negative, and zero elements in an array.

Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements in the array:");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int p=0,o=0,q=0;
    for(int i=0;i<n;i++)
    {
     if(a[i]>0)
     p++;
     else if(a[i]<o)
     q++;
     else
     o++;
    }
    printf("Positive= %d \n",p);
    printf(" Negative= %d \n ",q);
    printf(" Zeroes= %d \n ",o);

return 0;
}