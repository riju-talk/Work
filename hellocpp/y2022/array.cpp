
#include<iostream>
#include<string>

using namespace std;

int main(){
   string word;
   int a;
   cout << "Enter a word\n";
   cin >> word;
   a = word.length();
   int i=0;

   string wordrl[a]; 
   while(i<a){
       
       wordrl[i]=word[a-(i+1)];
       i++;
   }
    string wordr="";
    int x;
    for(x=0;x<a;x++){
        wordr=wordr + wordrl[x];
    }
    cout << "reverse word is\n" << wordr;
    return 0;
}