#include<iostream>
using namespace std;

int remove_duplicate(int a[],int n){
    int boundary = 0;
    for(int i=1;i<n;i++){
        if(a[i]>a[boundary]){
            boundary++;
            swap(a[i],a[boundary]);
        }
    }
    return boundary+1;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans = remove_duplicate(a, n);
    for(int i=0;i<ans;i++){
        cout<<a[i]<<" ";
    }
}