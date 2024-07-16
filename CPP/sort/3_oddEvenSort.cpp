#include <iostream>
#include<algorithm>
using namespace std;

void sortIt(long long arr[], long long n)
{
    int boundary = n-1;
    for (int i =0;i<=boundary;i++){
        if (arr[i]%2==0){
            swap(arr[i],arr[boundary--]);
            i--;
        }
    }
    sort(arr, arr + boundary+1, std::greater<long long>());

    sort(arr + boundary+1, arr + n);
}

int main(){
    long long n;
    cin>>n;
    long long arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortIt(arr, n);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}