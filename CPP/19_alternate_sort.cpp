#include<iostream>
#include<algorithm>
using namespace std;

void rearrange1(long long *arr, int n) 
{ 
    int boundary = 0;
    if (n==1) return;
    if(n%2==0){
        while(boundary<n-1){
            swap(arr[boundary++],arr[n-1]);
            swap(arr[boundary++],arr[n-1]);
            sort(arr+boundary,arr+n);
        }
    }
    else{
        while(boundary<n-2){
            swap(arr[boundary++],arr[n-1]);
            swap(arr[boundary++],arr[n-1]);
            sort(arr+boundary,arr+n);
        }
    }
}

void rearrange2(long long *arr, int n) 
{ 
    int boundary = 0;
    if (n==1) return;
    if(n%2==0){
        while(boundary<n-1){
            swap(arr[boundary++],arr[n-1]);
            swap(arr[boundary++],arr[n-1]);
            int i = n-1;
            long long temp = arr[n-1];
            while(i>boundary){
                arr[i] = arr[i-1];
                i--;
            }
            arr[boundary] = temp;
        }
    }
    else{
        while(boundary<n-2){
            swap(arr[boundary++],arr[n-1]);
            swap(arr[boundary++],arr[n-1]);
            int i = n-1;
            long long temp = arr[n-1];
            while(i>boundary){
                arr[i] = arr[i-1];
                i--;
            }
            arr[boundary] = temp;
        }
    }
}

void rearrange3(long long *arr, int n) {
        
    int max_idx = n - 1;
    int min_idx = 0;
    
    long long max_elem = arr[n - 1] + 1;
    
    for (int i = 0; i < n; i++) {
        
        if (i % 2 == 0) {
            arr[i] += (arr[max_idx] % max_elem) * max_elem;
            max_idx--;
        } 
        
        else {
            arr[i] += (arr[min_idx] % max_elem) * max_elem;
            min_idx++;
        }
    }
    
    
    for (int i = 0; i < n; i++) {
        arr[i] = arr[i] / max_elem;
    }
}

int main()
{
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    rearrange3(arr, n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}