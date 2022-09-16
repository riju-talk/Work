#include <stdio.h>
#include <conio.h>

int main()
{
    int array[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int in1, in2, *ptr1, *ptr2, fact;
    printf("Enter the first and last number in range to be deleated:\n");
    scanf("%d,%d", &in1, &in2);
    for (int i = 0; i < 20; i++)
    {
        if (array[i] == in1)
        {
            ptr1 = &array[i];
        }
        else if (array[i] == in2)
        {
            ptr2 = &array[i + 1];
        }
    }
    fact = ptr2 - ptr1;
    int count1 = ptr1 - array;
    int count2 = ptr2 - array;

    for (int j = 0; j < fact; j++)
    {
        *(array + j + count1) = *(array + j + count2);
    }
    for (int i = 0; i < (20 - fact); i++)
    {
        printf("%d ", *(array + i));
    }

    return 0;
}