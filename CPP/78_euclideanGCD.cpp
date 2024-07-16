#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int GCD(int a, int b){

    int maxi = max(a,b);
    int mini = min(a,b);

    if(mini==0) return maxi;

    int quotient = maxi%mini;
    int remainder = maxi/mini;

    return GCD(quotient,remainder);
}

int main(){
    cout<<GCD(9,3)<<endl;
    cout<<GCD(45,60)<<endl;
}