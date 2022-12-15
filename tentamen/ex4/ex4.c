/*
   Exercise 4:

   1) Ask the user to enter a number.
   2) Count the number of digits in the number.

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    long num;
    //int *pCounter;
    int sum = 0;
    
    printf("Enter a number: ");
    scanf("%ld", &num);

    while (num != 0)
    {
        sum += 1;
        num /= 10;
    }

    printf("The number of digits in the number is: %d\n", sum);

    return 0;
}