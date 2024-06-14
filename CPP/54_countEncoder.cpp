#include<iostream>
#include<string>
using namespace std;

string encode(string s) {
    // code here
    string res = "";
    int l=0,r=0;
    while(l<s.length()){
        res+=s[l];
        while(r<s.length() and s[r]==s[l]) r++;
        res+=to_string(r-l);
        l = r;
    }
    return res;
}

int main(){
    string s = "aaaabbbccc";
    cout<<encode(s);
    return 0;
}