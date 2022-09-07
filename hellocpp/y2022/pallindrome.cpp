#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>

using namespace std;

string reverse(string a){
    
    int x;

    x = a.length();
    string y[x];
    int v=0;
    while(v<x){
        y[v]=a[x-(v+1)];
        v++;
    }
    string z="";
    int i=0;
    for(i;i<x;i++){
        z=z+y[i];
    }
    return z;
}

int main(){
    string word;
    string rword;
    cout << "Enter your word please \n";
    cin >> word;
    rword=reverse(word);
    
    string ch1 = word;
    string ch2 = rword;
    
    transform(ch1.begin(),ch1.end(),ch1.begin(),::tolower);
    transform(ch2.begin(),ch2.end(),ch2.begin(),::tolower);
    
    if ( ch1 == ch2 )
    {
        cout << "This word ," <<word<< "\nis a pallindrome";
    }
    else
    {
        cout << "This word ,"<<word<<"\nis not a pallindrome";
    }
    return 0;
}

