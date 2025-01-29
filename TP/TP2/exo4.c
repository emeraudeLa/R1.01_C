#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j1,m1,a1,j2,m2,a2;

    printf("j1 = ");
    scanf("%d", &j1);
    printf("m1 = ");
    scanf("%d", &m1);
    printf("a1 = ");
    scanf("%d", &a1);
    printf("j2 = ");
    scanf("%d", &j2);
    printf("m2 = ");
    scanf("%d", &m2);
    printf("a2 = ");
    scanf("%d", &a2);

    if (a1==a2)
    {
        if (m1==m2)
        {
            
            if (j1==j2)
            {
                printf("%d/%d/%d",j1,m1,a1);
            }
            else if(j1<j2)
            {
                printf("%d/%d/%d",j1,m1,a1);
            }
            else
            {
                printf("%d/%d/%d",j2,m2,a2);
            }

        }

        else if (m1<m2)
        {
            printf("%d/%d/%d",j1,m1,a1);
        }

        else
        {
            printf("%d/%d/%d",j2,m2,a2);
        }
        
    }
    
    else if (a1<a2)
    {
        printf("%d/%d/%d",j1,m1,a1);
    }
    
    else
    {
        printf("%d/%d/%d",j2,m2,a2);
    }

    
    return EXIT_SUCCESS;
}