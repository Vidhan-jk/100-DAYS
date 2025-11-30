/*Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    int count[10] = {0};  // Array to store count of each digit
    while(num > 0)
    {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    int maxCount = 0;
    int mostFrequentDigit = -1;
    for(int i = 0; i < 10; i++)
    {
        if(count[i] > maxCount)
        {
            maxCount = count[i];
            mostFrequentDigit = i;
        }
    }
    printf("The digit that occurs the most is: %d\n", mostFrequentDigit);
    return 0;
}