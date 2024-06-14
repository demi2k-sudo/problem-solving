#include<iostream>
#include<set>
using namespace std;

int* greaterElement(int arr[], int n)
{
    // Complete the function
    set<int> bkp(arr,arr+n);
    for(int i=0;i<n;i++){
        auto found = bkp.find(arr[i]);
        found++;
        if(found==bkp.end()) arr[i]=-10000000;
        else arr[i] = *(found);
    }
    return arr;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int *res = greaterElement(arr, n);
    for(int i=0;i<n;i++){
        cout << *(res+i) << " ";
    }
    return 0;
}