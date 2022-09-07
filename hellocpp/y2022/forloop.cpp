#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

int main(){
    int i;
    cout <<"Please Enter a number"<<"\n";
    cin >> i;
    if(20>i){
        cout<< i <<" is the less than 20";
    }
    else if(20<i<100){
        cout<< i<< " is the bigger than 20 and less than 100";
    }
    else{
        cout<<"The biggest number is"<<i;
    }
    return 0;
}