<<<<<<< HEAD
//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>
int main() {
    int n, original, remainder, digits = 0, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    // Count the number of digits
    while (original != 0) {
        original /= 10;
        digits++;
    }

    original = n;

    // Calculate the sum of the cubes of each digit
    while (original != 0) {
        remainder = original % 10;
        sum += pow(remainder, digits);
        original /= 10;
    }

    if (sum == n)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
=======
//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>
int main() {
    int n, original, remainder, digits = 0, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    // Count the number of digits
    while (original != 0) {
        original /= 10;
        digits++;
    }

    original = n;

    // Calculate the sum of the cubes of each digit
    while (original != 0) {
        remainder = original % 10;
        sum += pow(remainder, digits);
        original /= 10;
    }

    if (sum == n)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
>>>>>>> e36c6618394b56e881f11873f6778e652dad66a7
