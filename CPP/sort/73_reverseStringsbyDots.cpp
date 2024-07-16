#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string reverseWords (string s)
{
    //code here.
    int start = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='.'){
            reverse(s.begin()+start,s.begin()+i);
            start = i+1;
        }
    }
    if(start<s.size()) reverse(s.begin()+start,s.end());
    return s;
}

int main(){
    string s = "i.like.this.program.very.much";
    cout<<reverseWords(s);
    return 0;
}