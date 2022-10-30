#include <stdio.h>
int main()
{

    int x, i, j;
    printf("Enter the number of rows\n");
    scanf("%d", &x);

    for (j = 0; j < x; j++)
    {
        printf("*");
    }
    printf("\n");
    for (i = (x - 1); i > 0; i--)
    {
        for (j = 0; j < (x - i); j++)
        {
            printf(" ");
        }
        for (j = i; j > 0; j--)
        {
            if (j < i && j > 1)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
