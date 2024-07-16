#include<iostream>
#include<climits>
using namespace std;

int findElement(int arr[], int n) {
    int leftmax=0,rightmin=INT_MAX;
    int leftInfo[n],rightInfo[n];
    for(int i=0;i<n;i++){
        leftInfo[i] = arr[i]-leftmax;
        if(leftmax<arr[i]) leftmax = arr[i];
    }
    for(int i=n-1;i>=0;i--){
        rightInfo[i] = arr[i]-rightmin;
        if(rightmin>arr[i]) rightmin = arr[i];
    }
    for(int i=0;i<n;i++){
        // cout<<leftInfo[i]<<" "<<rightInfo[i]<<endl;
    }
    for(int i=1;i<n-1;i++){
        if(leftInfo[i]>=0 and rightInfo[i]<=0) return arr[i];
    }
    return -1;
    
}

int main(){
    int arr[] = {1,3,20,4,1,0};
    cout<<findElement(arr,6)<<endl;
    //another example
    int arr1[] = {5,10,20,15};
    cout<<findElement(arr1, 4);
    return 0;
}