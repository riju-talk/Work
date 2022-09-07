#include <stdio.h>
#include <stdlib.h>
#include "traverse.h"
void sort(int arr[100], int len);
void merge(int arr1[100], int arr2[100]);
int lengthof(int arr[100]);
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
int main()
{
    int arr[100] = {1, 2, 18, 5, 6, 7, 8, 9, 0, 10, 13, 12, 11, 14, 15, 16, 17, 4, 19};
    int ls[100] = {30, 39, 22, 23, 24, 25, 26, 27, 28, 29, 20, 31, 32, 33, 34, 37, 36, 35, 38, 21};
    int len = lengthof(arr);
    int lent = lengthof(ls);
    sort(arr, len);
    sort(ls, lent);
    merge(arr, ls);
    int nlen = lengthof(arr);
    traversei(arr, nlen);
    return 0;
}

void sort(int arr[100], int len)
{
    for (int i = 0; i < (len - 1); i++)
    {
        for (int j = 0; j < (len - 1 - i); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void merge(int arr1[100], int arr2[100])
{
    int len = lengthof(arr2);
    int lent = lengthof(arr1);
    for (int i = 0; i < len; i++)
    {
        arr1[lent + i] = arr2[i];
    }
}