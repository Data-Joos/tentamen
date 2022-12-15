/*9. Write a program in C to find the largest element using Dynamic Memory Allocation.

Test Data :

Input total number of elements(1 to 100): 5
Number 1: 5
Number 2: 7
Number 3: 2
Number 4: 9
Number 5: 8

Expected Output :
The Largest element is :  9.00*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int nrOfElement = 0;
    int largestNumber = 0;

    int *pt;
    printf("Input total number of elements(1 to 100): ");
    scanf("%d",&nrOfElement);
// if you use calloc you need to remove * and add ,
    pt = (int*)malloc(nrOfElement*sizeof(int));

    int index;
    for(index = 0; index <nrOfElement; index++)
    {
        printf("Number %d: ",index+1);
        scanf("%d",&pt[index]);

        if(pt[index]>largestNumber)
        {
            largestNumber = pt[index];
        }
    }
    printf("The largest element is: %d", largestNumber);

    free(pt);


    return 0;
}