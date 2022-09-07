#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float d,c;
    int temp1;
    float temp2;
    scanf("%d%d\n%f%f",&a,&b,&c,&d);
    if(a>b && c>d){
        temp1=a-b;
        temp2=c-d;
    }
    else{
        temp1=b-a;
        temp2=d-c;
        
    }
    printf("%d %d\n%f %f",a+b,temp1,c+d,temp2);

    
    return 0;
}
