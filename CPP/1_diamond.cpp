#include<iostream>
using namespace std;

void PatternPrint(int n){
    for (int i=0;i<=n;i++){
        for(int j=0;j<n-i;j++) cout<<" ";
        for(int j=n-i;j<n;j++) cout<<"* ";
        cout<<endl;
    }
    for (int i=5;i>0;i--){
        for(int j=0;j<n-i;j++) cout<<" ";
        for(int j=n-i;j<n;j++) cout<<"* ";
        cout<<endl;
    }
}

int main(){
    PatternPrint(5);
}