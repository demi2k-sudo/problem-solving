#include <iostream>
#include <vector>
#include <string>
using namespace std;

int mod = 1e9+7;
int dive(string &str, int i,vector<int>&memo){
    
    if (i==str.length()) return 1;
    
    if(memo[i]!=-1){
        return memo[i];
    }
    
    int choice1=0,choice2=0;
    
    if(str[i]<='9' and str[i]>'0') {
        choice1 = dive(str,i+1,memo);
    }
    
    string part = str.substr(i,2);
    if ( i<=str.length()-2 and part<="26" and part>="10") {
        choice2 = dive(str,i+2,memo);
    }
    
    memo[i] = (choice1+choice2)%mod;
    return (choice1+choice2)%mod;
}
int CountWays(string str){
    vector<int> memo(str.length(),-1);
    return dive(str,0,memo);
}

int main(){
    string str;
    cin>>str;
    cout<<CountWays(str);
    return 0;
}