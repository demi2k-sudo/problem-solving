#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> alternateSort(int arr[], int n)
{
    // Your code goes here
    bool toggle = true;
    vector<int> result;
    int l=0,r =n-1;
    sort(arr,arr+n);
    while(l<=r){
        if(toggle){
            result.push_back(arr[r--]);
            toggle=false;
        }
        else{
            result.push_back(arr[l++]);
            toggle=true;
        }
    }
    return result;
}

int main()
{
    int arr[] = {10, 5, 2, 7, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> result = alternateSort(arr, n);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}