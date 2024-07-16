#include<iostream>
using namespace std;

void quickSort(int arr[], int start, int end){

    if(end<=start) return;
    int l = start, r = end-1;
    int pivot = end;
    while(l<=r){
        while(l<=r and arr[l]<arr[pivot]) l++;
        while(l<=r and arr[r]>arr[pivot]) r--;
        if(l<=r){
            int temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
            l++;
            r--;
        }
    }
    int temp = arr[l];
    arr[l] = arr[pivot];
    arr[pivot] = temp;
    quickSort(arr,start,l-1);
    quickSort(arr,l+1,end);

}

int main(){
    int a[10] = {1,5,3,7,2,5,2,3,4,1};
    for(int i=0;i<10;i++) cout<<a[i]<<" ";
    cout<<endl;
    quickSort(a,0,9);
    for(int i=0;i<10;i++) cout<<a[i]<<" ";
    cout<<endl;
}

