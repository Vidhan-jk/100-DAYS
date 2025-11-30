<<<<<<< HEAD
//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
void bin(int);

int main() 
{
    int a;
   printf("Enter a binary number:");
   scanf("%d",&a);
   bin(a);
    return 0;
}
void bin(int n)
{
    if(n==0)
    printf("");
    else
    {
        int r=n%10;
        if(r==0)
        {
        bin(n/10);
        printf("1");
        }
        else
        {
         bin(n/10);
        printf("0");
        }
    }
}
=======
//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
int main() {
    int n, digit, ones_complement = 0, place = 1;
    printf("Enter a binary number: ");
    scanf("%d", &n);
    //yeh smjh ni ara iska logic
>>>>>>> e36c6618394b56e881f11873f6778e652dad66a7
