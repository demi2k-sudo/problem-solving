#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp = n;
    int rev=0;
    while(temp){
        rev = (rev*10) + temp%10;
        temp = temp/10;
    }
    cout<<rev<<endl;
    int a = rev + n;
    cout<<a<<endl;
    rev = 0;
    temp = a;
    while(temp){
        rev = (rev*10) + temp%10;
        temp = temp/10;
    }
    cout<<rev<<endl;
    cout<<(rev==a)<<endl;
}