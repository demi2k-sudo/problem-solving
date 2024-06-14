#include<iostream>
using namespace std;

string printString(string &S, char ch, int count)
{
    // Your code goes here
    int i=0;
    while(count and i<S.length()){
        if(S[i++]==ch) count--;
    }
    
    return (count!=0 or i==S.length())?"Empty string":S.substr(i);
}

int main(){
    string S="geeksforgeeks";
    cout<<printString(S,'e',2);
    return 0;
}