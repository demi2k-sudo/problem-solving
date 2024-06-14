#include<iostream>
using namespace std;

int totalCount(int arr[], int n, int k) {
    // code here
    int count =0;
    for(int i = 0 ;i<n;i++){
        count+=arr[i]/k;
        if((arr[i]%k)!=0){
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {2,3,4,5};
    int n = 4;
    int k = 3;
    cout<<totalCount(arr,n,k);
    return 0;
}