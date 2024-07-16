#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    string copy = s;
    int l = s.length()-1;
    for(int i=0;i<s.length();i++){
        if((s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z')){
            while(!((copy[l]>='a' and copy[l]<='z') or (copy[l]>='A' and copy[l]<='Z'))) l--;
            if(l>=0) s[i] = copy[l--];
        }
    }
    cout<<s;
}