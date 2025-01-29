#include <stdio.h>
#include <stdlib.h>
const int MAJEUR=18;

int main()
{
    int age;

    printf("Quel est votre age ?");
    scanf("%d", &age);

    if (age>=MAJEUR)
    {
        printf("Vous êtes majeur");
    }
    else
    {
        printf("Vous n'êtes pas majeur");
    }

    return EXIT_SUCCESS;
}