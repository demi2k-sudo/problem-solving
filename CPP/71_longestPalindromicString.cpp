#include<iostream>
#include<string>
using namespace std;

string longestPalindrome(string S){
    // code here 
    int l,r;
    string longest = "";
    for(int i=0;i<S.size();i++){
        l = i;
        r = i;
        while(l>=0 and r<S.size() and S[l]==S[r]){
            // cout<<l<<" "<<r<<endl;
            if((r-l+1)>longest.size()){
                longest = S.substr(l,r+1-l);
                // cout<<longest<<endl;
            }
            l--;
            r++;
    }
    }
    for(int i=0;i<S.size();i++){
        l = i;
        r = i+1;
        while(l>=0 and r<S.size() and S[l]==S[r]){
            // cout<<l<<" "<<r<<endl;
            if((r-l+1)>longest.size()){
                longest = S.substr(l,r+1-l);
                // cout<<longest<<endl;
            }
            l--;
            r++;
    }
    }
    return (longest=="")?S.substr(0,1):longest;
}

int main(){
    string s = "aaaabbaa";
    cout<<longestPalindrome(s);
    return 0;
}