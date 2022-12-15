#include <stdio.h>
#include <stdlib.h>

/*4. Write a program in C to add two numbers using pointers.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

The sum of the entered numbers is : 11 */


int main()
{
    int num1;
    int num2;
    int *pNum1 = &num1;
    int *pNum2 = &num2;
    int sum = 0;

    printf("Enter the first nummer: ");
    scanf("%d",pNum1);
    printf("Enter the second number: ");
    scanf("%d",pNum2);

    sum = *pNum1 + *pNum2;
    printf("The sum of the entered numbers is: %d",sum);


    return 0;
}

/*Ett annat exempel
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int sum = 10;
    int *pSum = &sum;
    
    printf("Value of pSum is pointing to: %d\n",*pSum);
    printf("The adress of pSum is pointing to: %p\n",pSum);
    printf("The adress of sum is: %p\n",&sum);
    *pSum+=20;
    printf("Value of sum is pointing to: %d\n",sum);


    return 0;
}*/