#include <stdio.h>
int main()
{
    int x, y;
    x = 70;
    y = 50;
    printf("x=%d and y=%d\n", x, y);
    int temp = x + y;
    y = temp - 50;
    x = temp - 70;
    printf("x=%d and y=%d\n", x, y);
    return 0;
}
