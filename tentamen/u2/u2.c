#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Deklarera ålder och namn
    int age;
    char name[10];

    //Printa ut fråga

    printf("Hur gammal är du? ");

    /*Hämta svar från user.
    &-tecknet används för alla datatyper förutom char/array */
    scanf("%d",&age);

    printf("Vad heter du? ");

    scanf("%s",name);

    //Resultat
    printf("Hej %s, du är %d år gammal\n",name,age);

    return 0;
}