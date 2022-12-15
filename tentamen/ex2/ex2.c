#include <stdio.h>
#define MAX 1000000
#define MAXL 1000000
//Not 03, it's an O
//Compile with command gcc -O2 ex2.c (ENTER)
//time ./a.out
//This is called "Bench marking", 
//and it's a way to measure the time and see how long the program takes to run


int main()
{
    int i;
    int *a;

    for(i=0;i<MAX;i++)
    {
        a=(int*)malloc(MAXL);

        free(a);
    }



    return 0;
}