<<<<<<< HEAD
//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
int main() {
    int n, sum = 0, digit;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10; // Extract the last digit
        sum += digit;   // Add it to the sum
        n /= 10;        // Remove the last digit
    }

    printf("Sum of digits is: %d\n", sum);
    return 0;
=======
//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
int main() {
    int n, sum = 0, digit;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10; // Extract the last digit
        sum += digit;   // Add it to the sum
        n /= 10;        // Remove the last digit
    }

    printf("Sum of digits is: %d\n", sum);
    return 0;
>>>>>>> e36c6618394b56e881f11873f6778e652dad66a7
}