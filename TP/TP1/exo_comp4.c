#include <stdio.h> 
#include <stdlib.h> 
int main()
{
    //Declaration des variables
    char lettre[10];

    printf("Caractère : ");
    scanf("%s", lettre);
    
    printf("   %s\n",lettre);
    printf("  %s %s\n",lettre,lettre);
    printf(" %s   %s\n",lettre,lettre);
    printf("%s%s%s%s%s%s%s\n",lettre,lettre,lettre,lettre,lettre,lettre,lettre);

    EXIT_SUCCESS;
}