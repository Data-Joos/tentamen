#include <stdio.h>
#include <stdlib.h>

/*5. Write a program in C to add numbers using call by reference.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

 The sum of 5 and 6  is 11*/

int add(int *,int *);

int main()
{
    int num1;
    int num2;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);

    int sum = add(&num1, &num2);

    printf("The sum of %d and %d is %d",num1,num2,sum);


    return 0;
}

int add(int *x, int *y)
{
    return (*x)+(*y);
}
