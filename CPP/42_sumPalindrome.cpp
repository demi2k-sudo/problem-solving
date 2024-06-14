#include <iostream>
#include <vector>
using namespace std;

long long rev(int n){
    long long rev=0,temp=n;
    while(temp>0){
        rev=(rev*10)+(temp%10);
        temp/=10;
    }
    return rev;
}

long long isSumPalindrome(long long n){
    int k=6;
    while(k){
        long long reversed = rev(n);
        if (reversed==n) return n;
        n+=reversed;
        k--;
    }
    return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<isSumPalindrome(n)<<endl;
    }
    return 0;
}