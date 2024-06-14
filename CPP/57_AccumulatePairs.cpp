#include <iostream>
using namespace std;

void modifyAndRearrangeArr(int arr[], int n) 
{ 
    // Complete the function
    for(int i = 1; i<n; i++){
        if(arr[i-1]==arr[i]){
            arr[i-1]+=arr[i];
            arr[i]=0;
        }
    }
    int boundary = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[boundary++]);
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    modifyAndRearrangeArr(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}