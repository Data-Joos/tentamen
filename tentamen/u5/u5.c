/*3. Write a program in C to write multiple lines in a text file.
Test Data :
Input the number of lines to be written : 4
:: The lines are ::
test line 1
test line 2
test line 3
test line 4
Expected Output :

 The content of the file text.txt is  :
test line 1
test line 2
test line 3
test line 4*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    FILE *fp;
    int input;
    int i;
    char str[50];

    printf("Input the number of lines to be written: ");
    scanf("%d",&input);

    fp = fopen("text.txt", "w");

    for(i = 0;i <=input; i++)
    {
        fgets(str,sizeof(str),stdin);
        fprintf(fp,"%s",str);
    }

    fclose(fp);
    fp = NULL;

    fp = fopen("text.txt","r");
    printf("\nThe content of the file text.txt is: ");
    char c;
    while((c = fgetc(fp)) != EOF)
    {
        printf("%c",c);
    }
    puts("");

    fclose(fp);
    fp = NULL;

    return 0;
}