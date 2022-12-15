/*
  Exercise 1: Malloc and Calloc

  1) Ask a user the size of an array of integer.
  2) Allocate the array with help of malloc/calloc.
  3) Initialize each element of the array to a random number between 1 and 100.
  4) Define a function linearsearch that find a given number in the
  array and return its index.
  5) Print the index of the given number if it exists in the array.

 */


#include <stdio.h>
#include <stdlib.h>

// declare function
int linearsearch(int, int *, int);

int main() {
    // input from user
    int size = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // allocate the array with malloc
    int *arr = (int *)malloc(size * sizeof(int));

    // initialize each element of the array to a random number between 1 and 100
    int i;
    for (i = 0; i < size; i++)
        arr[i] = rand() % 100 + 1;
    
    // display/print out array
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    
    // search input from user
    int searchNum;
    printf("\nSearch a number in the array: ");
    scanf("%d", &searchNum);
    
    // declare and initialize a function variable
    int indexPos = linearsearch(size, arr, searchNum);

    // check if the searched number is present in the array, if yes: print out the correct index position
    if (indexPos == -1)
    {
        printf("The number %d is not found anywhere in the array\n", searchNum);
    }
    else
    {
        printf("The number %d was found in the array at index position %d\n", searchNum, indexPos);
    }
    
    // free memory from malloc
    free(arr);

    return 0;
}

// Define a function linearsearch that find a given number in the array and return its index
int linearsearch(int count, int *ptr, int key) {
    int index;

    for (index = 0; index < count; index++)
    {
        if (ptr[index] == key)
        {
            return index;
        }
    }
    
    return -1; // if searched number was not found in the array
} 