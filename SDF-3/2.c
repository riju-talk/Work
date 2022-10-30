#include <stdio.h>

int main()
{
    int i, j, end, isPrime; 
    printf("Enter the number for prime fatorization\n");
    scanf("%d", &end);
    printf("The prime factors are\n");
    for(i=2; i<=end; i++)
    {
        isPrime = 1; 
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                isPrime = 0;
                break;
            }
        }
        if(isPrime==1)
        {
            if(end%i==0){
                printf("%d ",i);
            }
        }
    }

    return 0;
}