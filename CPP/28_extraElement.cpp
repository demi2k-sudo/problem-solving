#include <iostream>
using namespace std;

int findExtra(int n, int arr1[], int arr2[]) {
    for(int i=0; i<n; i++){
        if(arr1[i]!=arr2[i]){
            return i;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr1[n+1];
    int arr2[n];
    for(int i=0; i<n+1; i++){
        cin>>arr1[i];
    }
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    cout<<findExtra(n, arr1, arr2);
}