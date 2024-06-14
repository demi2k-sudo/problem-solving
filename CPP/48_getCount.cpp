#include<iostream>
#include<unordered_map>
using namespace std;

int getCount (string S, int N)
{
    unordered_map<char,int> shelf;
    int count = 0;
    for(int i = 0; i<S.length();i++){
        if(i==0) shelf[S[i]]++;
        if(i-1>=0 and S[i]!=S[i-1]) shelf[S[i]]++;
    }
    for(const auto& i:shelf)
        if (i.second==N) count++;
    return count;
    //code here.''
}

int main(){
    string s = "abacbabc";
    int n = 2;
    cout<<getCount(s,n);
    return 0;
}