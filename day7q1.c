<<<<<<< HEAD
//Q13: Write a program to input a year and check whether it is a leap year or not.
/*Input 1:
2020
Output 1:
Leap year
Input 2:
1900
Output 2:
Not a leap year
Input 3:
2000
Output 3:
Leap year
Year is a leap year if divisible by 4 but not 100, except if divisible by 400.*/

#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // Checking if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }

    return 0;
=======
//Q13: Write a program to input a year and check whether it is a leap year or not.
/*Input 1:
2020
Output 1:
Leap year
Input 2:
1900
Output 2:
Not a leap year
Input 3:
2000
Output 3:
Leap year
Year is a leap year if divisible by 4 but not 100, except if divisible by 400.*/

#include <stdio.h>
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // Checking if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }

    return 0;
>>>>>>> e36c6618394b56e881f11873f6778e652dad66a7
}