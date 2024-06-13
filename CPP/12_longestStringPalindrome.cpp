#include<iostream>
using namespace std;

string longestPalin (string S) {
    int maxi = 0,maxl,maxr;
    for(int i=0; i<S.length(); i++){
        int l,r;
        l=i;
        r=i;
        while(l>=0 && r<S.length() && S[l]==S[r]){
            if(maxi<(r-l+1)){ 
                maxi = r-l+1;
                maxl = l;
                maxr=r;
            }
            l-=1;
            r+=1;
        }
        l=i;
        r=i+1;
        while(l>=0 && r<S.length() && S[l]==S[r]){
            if(maxi<(r-l+1)) { 
                maxi = r-l+1;
                maxl = l;
                maxr=r;
            }
            l-=1;
            r+=1;
        }
    }
    return S.substr(maxl,maxi);
}

int main(){
    string S;
    cout<<"Enter the String : ";
    cin>>S;
    cout<<longestPalin(S);
}