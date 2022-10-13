#include <stdio.h>

int main()
{
    int amount, count;
    printf("Enter the amount\n");
    scanf("%d", &amount);

    if (amount > 500)
    {
        count = 0;
        for (int i = 1; amount >= 500; i++)
        {
            amount -= 500;
            count += 1;
        }
        printf("500 : %d", count);
    }
    if (amount < 500 && amount >= 100)
    {
        count = 0;
        for (int i = 1; amount >= 100; i++)
        {
            amount -= 100;
            count += 1;
        }
        printf(" 100 : %d", count);
    }

    if (amount < 100 && amount >= 50)
    {
        count = 0;
        for (int i = 1; amount >= 50; i++)
        {
            amount -= 50;
            count += 1;
        }
        printf(" 50 : %d", count);
    }

    if (amount < 50 && amount >= 20)
    {
        count = 0;
        for (int i = 1; amount >= 20; i++)
        {
            amount -= 20;
            count += 1;
        }
        printf(" 20 : %d", count);
    }

    if (amount < 20 && amount >= 10)
    {
        count = 0;
        for (int i = 1; amount >= 10; i++)
        {
            amount -= 10;
            count += 1;
        }
        printf(" 10 : %d", count);
    }

    if (amount < 10 && amount >= 5)
    {
        count = 0;
        for (int i = 1; amount >= 5; i++)
        {
            amount -= 5;
            count += 1;
        }
        printf(" 5 : %d", count);
    }

    if (amount < 5 && amount >= 2)
    {
        count = 0;
        for (int i = 1; amount >= 2; i++)
        {
            amount -= 2;
            count += 1;
        }
        printf(" 2 : %d", count);
    }
    if (amount < 2 && amount >= 1)
    {
        count = 0;
        for (int i = 1; amount >= 1; i++)
        {
            amount -= 1;
            count += 1;
        }
        printf(" 1 : %d", count);
    }

    return 0;
}
