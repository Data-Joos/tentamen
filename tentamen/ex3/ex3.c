/*
   Exercise 3:

   Using a while loop print 50 natural numbers separated by a tabulator.
   Add a new line after 10, 20, 30, 40 and 50.

OUTPUT

1    2    3    4    5    6    7    8    9    10   
11    12    13    14    15    16    17    18    19    20   
21    22    23    24    25    26    27    28    29    30   
31    32    33    34    35    36    37    38    39    40   
41    42    43    44    45    46    47    48    49    50   

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
 /*   int i, j;
    int x = 1;

    for (i = 1; i < 6; i++)
    {
        for (j = 1; j < 11; j++)
        {
            printf("%d\t", x);
            x += 1;
        }
        puts("");
    } 
*/
    int x = 1;
    int count = 0;

    while (x < 51)
    {
        printf("%d\t", x);
        x += 1;
        count++;

        if (count % 10 == 0)
        {
            printf("\n");
        }
    }
    puts("");

    return 0;
}