#include<stdio.h>
void grade(int a);
void grade(int a){
    if(a>=90){
        printf("You have grade A in this subject\n");
    }
    else if(a>=80){
        printf("You have grade B in this subject\n");
    }
    else if(a>=70){
        printf("You have grade C in this subject\n");
    }
    else if(a>=60){
        printf("You have grade D in this subject\n");
    }
    else if(a>=40){
        printf("You have grade E in this subject\n");
    }
    else if(a<=40){
        printf("You have grade F in this subject\n");
    }
}

int main(){
    int x,y,z,w,v;
    printf("Enter your marks\n");
    scanf("%d\n%d\n%d\n%d\n%d",&x,&y,&z,&w,&v);
    grade(x);
    grade(y);
    grade(z);
    grade(w);
    grade(v);
return 0;
}
