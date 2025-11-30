Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements...");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int largest = a[0];
    int second_largest = -1;
    for(int i=1;i<n;i++)
    {
        if(a[i] > largest)
        {
            second_largest = largest;
            largest = a[i];
        }
        else if(a[i] > second_largest && a[i] != largest)
        {
            second_largest = a[i];
        }
    }
    printf("The second largest element is: %d\n", second_largest);
    return 0;
}//not working
