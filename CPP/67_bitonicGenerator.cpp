#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bitonicGenerator(int arr[], int n)
{
    // Your code goes here
    int l = 0;
    for(int i=0;i<n;i++){
        if (i%2==0) swap(arr[i],arr[l++]);
    }
    sort(arr,arr+l);
    sort(arr+l,arr+n,greater<int>());
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    bitonicGenerator(arr, n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}