/*
   Exercise 5:

   1) Declare and Initialize an array "a1" with
      the following numbers:
      
      34 2 5 56 3 7 8

   2) Declare and Initialize an array "a2" with
       the following numbers:
      
      74 4 1 10 23 4 6

   3) Merge both arrays i a third array named "a3"

   4) Print array "a3".

*/

#include <stdio.h>

int main() {
    int a1[] = {34, 2, 5, 56, 3, 7, 8};
    int a2[] = {74, 4, 1, 10, 23, 4, 6};
    int a3[14];

    int size1 = 7;
    int size2 = 7;
    int i;
    int j;

    for (i = 0; i < size1; i++)
    {
        a3[i] = a1[i];
    }

    j = i;  // i = 7

    for (i = 0; i < size2; i++)
    {
        a3[j] = a2[i]; // a3[7] = a2[0]
        j++;          // j = 8 ... j = 14
    }
    
    for (i = 0; i < j; i++) // i < j = 0 < 14
    {
        printf("%d ", a3[i]);
    }

    puts("");

    return 0;
}