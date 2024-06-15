#include<iostream>
using namespace std;

bool isPrime(int n){
    // cout<<n;
    if(n<2) return false;
    if(n==2) return true;
    for(int i=2;i*i<=n;i++){
        if (n%i==0) return false;
    }
    return true;
}

int reverse(int n){
    int temp =0;
    while(n){
        temp = temp*10 + n%10;
        n/=10;
    }
    return temp;
}
int isTwistedPrime(int N) {
    // code here
    return(isPrime(N) and isPrime(reverse(N)));
}

int main(){
    int n;
    cin>>n;
    cout<<isTwistedPrime(n);
    return 0;
}