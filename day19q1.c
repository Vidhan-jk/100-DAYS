<<<<<<< HEAD
//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
int main() {
    int a, b, hcf, lcm, temp;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    // Swap if a is less than b
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }

    // Find HCF using Euclidean algorithm
    int x = a, y = b; // Preserve original values for LCM calculation
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    hcf = x;

    // Calculate LCM using the relation LCM * HCF = a * b
    lcm = (a * b) / hcf;

    printf("LCM is: %d\n", lcm);
    return 0;
=======
//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
int main() {
    int a, b, hcf, lcm, temp;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    // Swap if a is less than b
    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }

    // Find HCF using Euclidean algorithm
    int x = a, y = b; // Preserve original values for LCM calculation
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    hcf = x;

    // Calculate LCM using the relation LCM * HCF = a * b
    lcm = (a * b) / hcf;

    printf("LCM is: %d\n", lcm);
    return 0;
>>>>>>> e36c6618394b56e881f11873f6778e652dad66a7
}