#include <stdio.h>
#include <stdlib.h>
const int AGE_MIN=7;
const int AGE_MAX=77;

int main()
{
    int age;

    printf("Quel est votre age ?");
    scanf("%d", &age);

    if ((age>=AGE_MIN)&&(age<=AGE_MAX))
    {
        printf("Vous pouvez lire le journal de Tintin");
    }
    else
    {
        printf("Désolé, vous ne pouvez pas lire le journal de Tintin");
    }

    return EXIT_SUCCESS;
}