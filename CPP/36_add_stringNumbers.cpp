#include<iostream>
#include<math.h>
#include<string>
using namespace std;

string findSum(string X, string Y) {
    long long a=0;
    for(int i=0;i<X.length();i++){
        a+=(int)(X[i]-48)*(pow(10,X.length()-i-1));
    }
    for(int i=0;i<Y.length();i++){
        a+=(int)(Y[i]-48)*(pow(10,Y.length()-i-1));
    }
    // cout<<a<<endl;
    // Your code goes here
    return(to_string(a));
}

int main(){
    cout<<findSum("12","12");
    return(0);
}