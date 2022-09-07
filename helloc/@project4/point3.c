#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[10][10];
    int row, col;
    printf("Enter the number of rows:\n");
    scanf("%d", &row);
    printf("Enter the number of columns:\n");
    scanf("%d", &col);

    for (int i = 0; i < row; i++)
    {
        printf("elements for row no.:%d\n", i + 1);
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}