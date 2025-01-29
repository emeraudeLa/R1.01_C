#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ch1[50], ch2[50], ch3[50];
    int test1_2, test2_3, test1_3;

    printf ("Chaine de caractères 1 :");
    scanf("%s",ch1);

    printf ("Chaine de caractères 2 :");
    scanf("%s",ch2);

    printf ("Chaine de caractères 3 :");
    scanf("%s",ch3);

    test1_2=strcmp(ch1, ch2);
    test2_3=strcmp(ch2, ch3);
    test1_3=strcmp(ch1, ch3);
    
    if (test1_2<=0 && test1_3 <=0)
    {
        if (test2_3 <=0)
        {
            printf("%s,%s,%s",ch1,ch2,ch3);
        }
        else
        {
            printf("%s,%s,%s",ch1,ch3,ch2);
        }

    }
    else if (test1_2>=0 && test2_3 <=0)
    {
        if (test1_3 <=0)
        {
            printf("%s,%s,%s",ch2,ch1,ch3);
        }
        else
        {
            printf("%s,%s,%s",ch2,ch3,ch1);
        }
    }
    else
    {
        if (test1_2 <=0)
        {
            printf("%s,%s,%s",ch3,ch1,ch2);
        }
        else
        {
            printf("%s,%s,%s",ch3,ch2,ch1);
        }
    }

    return EXIT_SUCCESS;
}