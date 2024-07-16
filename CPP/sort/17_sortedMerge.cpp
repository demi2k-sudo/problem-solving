#include<iostream>
#include<algorithm>
using namespace std;

void merge1(long long arr1[], long long arr2[], int n, int m) 
{ 
    int ptr = 0;
    for(int i=0;i<m;i++){
        while(arr1[ptr]<arr2[i]) ptr++;
        
        if (ptr>=n) break;
        int temp = arr2[i];
        arr2[i]=arr1[n-1];
        for(int j=n-1;j>ptr;j--){
            arr1[j] = arr1[j-1];
        }
        arr1[ptr] = temp;
    }
    sort(arr2,arr2+m);
} 

void merge2(long long arr1[], long long arr2[], int n, int m) 
{ 
    for (int i=0;i<n;i++){
        if(arr1[n-1]>arr2[0]){
            swap(arr1[n-1],arr2[0]);
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
        }
    }
} 

void mergeKing(long long arr1[], long long arr2[], int n, int m) {
    int i = n - 1;
    int j = 0;
    
    while (i >= 0 && j < m) {
        if (arr1[i] > arr2[j]) {
            swap(arr1[i], arr2[j]);
            i--;
            j++;
        } else {
            break;
        }
    }
    
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}

int main()
{
    int n,m;
    cin>>n>>m;
    long long arr1[n], arr2[m];
    for(int i=0;i<n;i++) cin>>arr1[i];
    for(int i=0;i<m;i++) cin>>arr2[i];
    mergeKing(arr1, arr2, n, m);
    for(int i=0;i<n;i++) cout<<arr1[i]<<" ";
    for(int i=0;i<m;i++) cout<<arr2[i]<<" ";
    cout<<endl;
    return 0;
}