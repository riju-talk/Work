#include <stdio.h>
#include <conio.h>

int main()
{
    int smll[] = {7, 8, 7, 6, 8, 9};
    int siz = sizeof(smll) / sizeof(smll[0]);
    int arr[] = {12, 76, 34, -90, 76, 3, 98, -111, -75, 43, 28};
    int len = sizeof(arr) / sizeof(arr[0]);
    int pos, no;
    
    //printf("Enter a number to be inserted into the array:\n==>");
    //scanf("%d", &no);
    printf("Enter the postion the numbers should be should be inserted:\n==>");
    scanf("%d", &pos);

    for (int i = 0; i < len; i++)
    {
        printf("%6d,", arr[i]);
    }
    printf("\n");

    if (pos <= len)
    {
        for (int i = (len - 1); i >= (pos - 1); i--)
        {
            arr[i + (siz)] = arr[i];
        }
        
        for (int i = 0; i < siz; i++)
        {
            int smll[] = {7, 8, 7, 6, 8, 9};
            arr[(pos-1)+i]=smll[i];
            
        }
    }
    printf("\n");
    for (int i = 0; i < (len + siz); i++)
    {
        printf("%6d,", arr[i]);
    }
    return 0;
}