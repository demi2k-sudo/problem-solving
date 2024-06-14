#include<iostream>
using namespace std;

bool isPrime(int n){
    // cout<<n;
    if(n<2) return false;
    if(n==2) return true;
    for(int i=2;i<=n/2;i++){
        if (n%i==0) return false;
    }
    return true;
}
int primeSum(int N){
    // code here
    int sum = 0;
    int temp = N;
    while(temp){
        if(isPrime(temp%10)){
            sum+=temp%10;
        } 
        temp/=10;
    }
    return sum;
}

int main(){
    cout<<primeSum(123);
    return 0;
}