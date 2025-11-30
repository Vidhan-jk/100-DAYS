<<<<<<< HEAD
//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    // Swap if a is less than b
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }

    // Find HCF using Euclidean algorithm
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF (GCD) is: %d\n", a);
    return 0;
}
=======
//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    // Swap if a is less than b
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }

    // Find HCF using Euclidean algorithm
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF (GCD) is: %d\n", a);
    return 0;
}
>>>>>>> e36c6618394b56e881f11873f6778e652dad66a7
