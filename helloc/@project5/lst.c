#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct lst
{
    int data;
    struct lst *nextitm;
};

int main()
{
    struct lst *head;
    struct lst *elm2;
 
    head = (struct lst *)malloc(sizeof(struct lst));
    elm2 = (struct lst *)malloc(sizeof(struct lst));

    head->data = 8;
    head->nextitm = elm2;

    elm2->data = 90;
    elm2->nextitm = NULL;

    for (struct lst *currentitm = head;; currentitm = currentitm->nextitm)
    {
        if (currentitm->nextitm != NULL)
        {
            printf("%d\t", currentitm->data);
        }
        else
        {
            printf("%d", currentitm->data);
            break;
        }
    }
    getch();
    return 0;
}