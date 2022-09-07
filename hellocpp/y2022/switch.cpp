#include<iostream>
#include<string>
using namespace std;


int main(){
    int g;
    cin >> g;

    switch (g)
    {
    case(1): /* constant-expression */
        cout<<"it's a beautiful monday.";
    case(3): /* constant-expression */
        cout<<"it's a beautiful tuesday.";
    default:
        cout<<"A great day in Westview";
    }

}