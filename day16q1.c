<<<<<<< HEAD
//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>
void bin(int);

int main() 
{
    int a;
   printf("Enter a number:");
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
        int r=n%2;
        bin(n/2);
        printf("%d",r);
    }
}
=======
//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    //doubt hai ismay smjh ni ara
>>>>>>> e36c6618394b56e881f11873f6778e652dad66a7
    