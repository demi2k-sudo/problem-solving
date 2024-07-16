#include<iostream>
using namespace std;

void insert(int arr[], int loc, int n, int num){
    int b = n-1;
    while(b>=loc){
        arr[b+1] = arr[b];
        b--;
    }
    arr[b+1] = num;
}

void insertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            int ind = i-1;
            while(ind>=0 and arr[ind]>arr[i]) ind--;
            insert(arr,ind+1,i,arr[i]);
        }
    }
}

int main(){
    int a[10] = {1,5,3,7,2};
    insert(a,2,5,90);
    for(int i=0;i<6;i++) cout<<a[i]<<endl;
    insertionSort(a,6);
    for(int i=0;i<6;i++) cout<<a[i]<<endl;
}