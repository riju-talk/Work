#include <stdio.h>
#include <stdlib.h>


int lengthof(int arr[100])
{
    int i = 0;
    while (true)
    {
        i++;
        if (arr[i] == 0 && arr[i + 1] == 0 && arr[i - 1] == 0)
            break;
    }
    return i - 1;
    }