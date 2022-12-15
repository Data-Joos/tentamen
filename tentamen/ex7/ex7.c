/*
  Exercise 7
 
  1) Ask the user to enter a number.
  2) Using a for loop print out the multiplication table of the number.

*/

#include <stdio.h>

int main() {
    int num;
    int sum;
    int i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (i <= 10)
    {
        sum = num * i; 
        printf("%d x %d = %d\n", num, i, sum);
        i++;
    }

    return 0;
}