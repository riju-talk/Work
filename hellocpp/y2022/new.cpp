#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

string fun(string arr){
    int arr_l = arr.length();
    string h[arr_l];    
    
    for(int a=0;a<arr_l;a++){
        h[a]=arr[a];
    }
    return h;
}

int main(){
    cout << "enter your name"<<"\n";
    string arr;
    getline(cin,arr);
    string d = fun(arr);


    return 0;
}
