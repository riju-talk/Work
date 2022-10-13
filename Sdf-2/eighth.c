#include<stdio.h>
int main(){
    float salary;
    printf("Enter your principle salary\n");
    scanf("%f",&salary);
    //printf("%3.2f",salary*(0.9));
    if(salary<=10000){
        printf("Your gross salary is %3.2f\n",salary+(salary*(0.2+0.8)));
    }
    else if(salary>=10001 && salary<=20000){
        printf("Your gross salary is %3.2f\n",salary+salary*(0.25+0.9));
    }
    else if(salary>=20001){
        printf("Your gross salary is %3.2f\n",salary+(salary*(0.3+0.95)));
    }
    return 0;
}