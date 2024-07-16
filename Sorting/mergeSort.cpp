#include<iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end){
    int n1 = mid - start + 1;
    int n2 = end - mid;
    int arr1[n1],arr2[n2];
    for(int i=0; i<n1; i++) arr1[i] = arr[start+i];
    for(int i=0; i<n2; i++) arr2[i] = arr[mid+1+i];
    int i=0,j=0,k=start;
    while(i<n1 and j<n2){
        if(arr1[i]<arr2[j]) arr[k++] = arr1[i++];
        else arr[k++] = arr2[j++]; 
    }
    if(i<n1){
        while(i<n1) arr[k++] = arr1[i++];
    }
    if(j<n2){
        while(j<n2) arr[k++] = arr2[j++];
    }
}

void mergeSort(int arr[], int start, int end){
    if (start>=end) return;
    int mid = start + ((end-start)/2);
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}

int main(){
    int a[10] = {1,5,3,7,2};
    for(int i=0;i<5;i++) cout<<a[i]<<" ";
    cout<<endl;
    mergeSort(a,0,4);
    for(int i=0;i<5;i++) cout<<a[i]<<" ";
    cout<<endl;
}

