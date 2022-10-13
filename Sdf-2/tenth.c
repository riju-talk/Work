#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter the three sides of the triangle\n");
    scanf("%d,%d,%d", &x, &y, &z);
    if ((x + y) > z && x < (y + z) && y < (x + z))
    {
        printf("Triangle is possible");
    }
    else
    {
        printf("Triangle is not possible");
    }
    return 0;
}