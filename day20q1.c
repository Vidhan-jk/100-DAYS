<<<<<<< HEAD
//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
int main() {
    int n, product = 1, digit, has_odd = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10; // Extract the last digit
        if (digit % 2 != 0) { // Check if the digit is odd
            product *= digit; // Multiply it to the product
            has_odd = 1; // Mark that we found at least one odd digit
        }
        n /= 10; // Remove the last digit
    }

    if (!has_odd) {
        product = 1; // If no odd digits were found, return 1
    }

    printf("Product of odd digits is: %d\n", product);
    return 0;
=======
//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
int main() {
    int n, product = 1, digit, has_odd = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10; // Extract the last digit
        if (digit % 2 != 0) { // Check if the digit is odd
            product *= digit; // Multiply it to the product
            has_odd = 1; // Mark that we found at least one odd digit
        }
        n /= 10; // Remove the last digit
    }

    if (!has_odd) {
        product = 1; // If no odd digits were found, return 1
    }

    printf("Product of odd digits is: %d\n", product);
    return 0;
>>>>>>> e36c6618394b56e881f11873f6778e652dad66a7
}