#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++)
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
}

int main(){
    int a[10] = {1,5,3,7,2};
    for(int i=0;i<5;i++) cout<<a[i]<<" ";
    cout<<endl;
    bubbleSort(a,5);
    for(int i=0;i<5;i++) cout<<a[i]<<" ";
    cout<<endl;
}