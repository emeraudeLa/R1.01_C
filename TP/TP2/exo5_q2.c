#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch1[50], ch2[50];
    int test;

    printf ("Chaine de caractères 1 :");
    scanf("%s",ch1);

    printf ("Chaine de caractères 2 :");
    scanf("%s",ch2);

    test=strcmp(ch1, ch2);
    if (test==0)
    {
        printf("%s,%s\n",ch1,ch2);
    }
    else if (test<0)
    {
        printf("%s,%s\n",ch1,ch2);
    }
    else
    {
        printf("%s,%s\n",ch2,ch1);
    }

    return EXIT_SUCCESS;
}