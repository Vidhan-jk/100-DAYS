Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array:");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements...");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter number of positions to rotate:");
    scanf("%d", &k);
    k = k % n;  // In case k is greater than n
    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = a[n - k + i];
    }
    for (int i = n - 1; i >= k; i--) {
        a[i] = a[i - k];
    }
    for (int i = 0; i < k; i++) {
        a[i] = temp[i];
    }
    printf("Array after rotation:");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}