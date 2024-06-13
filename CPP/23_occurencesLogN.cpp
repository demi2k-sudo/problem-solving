#include<iostream>
using namespace std;

int count(int arr[], int n, int x) {
    int l = 0;
    int r = n-1;
    int start=-1,end=-1,mid;
    while(l<=r){
        if(l==r){
            if(arr[l]==x){
                start = l;
                break;
            }
        }
        // cout<<l<<" "<<r<<endl;
        mid = (l+r)/2;
        
        if(arr[mid]>x){
            r = mid-1;
        }
        else if(arr[mid]<x){
            l=mid+1;
        }
        else{
            start = mid;
            r = mid-1;
        }
    }
    l = 0;
    r = n-1;
    while(l<=r){
        if(l==r){
            if(arr[l]==x){
                end = l;
                break;
            }
        }
        // cout<<l<<" "<<r<<endl;
        mid = (l+r)/2;
        
        if(arr[mid]>x){
            r = mid-1;
        }
        else if(arr[mid]<x){
            l=mid+1;
        }
        else{
            // cout<<mid<<"=-"<<endl;
            end = mid;
            l = mid+1;
        }
    }
    // cout<<start<<"--"<<end<<endl;
    return (end==-1&&start==-1)?0:end-start+1;
}

int main(){
    int arr[] = {1,2,2,2,2,3,4,7,8,8};
    int n = 10;
    int x = 2;
    cout<<count(arr,n,x)<<endl;
}