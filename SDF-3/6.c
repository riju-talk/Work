#include <stdio.h>
int main()
{
    int num, fact, ones;
    printf("Input Number: ");
    scanf("%d", &num);
    ones = num % 10;
    while (num != 0)
    {
        fact = num % 10;
        num /= 10;
    }
    printf("\nSum of the first and the last digit is %d: ", fact + ones);
    return 0;
}