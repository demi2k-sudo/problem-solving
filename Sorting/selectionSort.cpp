#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}


int main(){
    int a[10] = {1,5,3,7,2};
    for(int i=0;i<5;i++) cout<<a[i]<<" ";
    cout<<endl;
    selectionSort(a,5);
    for(int i=0;i<5;i++) cout<<a[i]<<" ";
    cout<<endl;
}