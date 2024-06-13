#include<iostream>
#include<unordered_set>
using namespace std;

bool hasArrayTwoCandidates(int arr[], int n, int x) {
    unordered_set<int> hashtable;
    for(int i=0;i<n;i++){
        if (hashtable.find(x-arr[i])!=hashtable.end()){
            return true;
        }
        hashtable.insert(arr[i]);
    }
    return false;
}

int main(){
    int arr[] = {1,4,45,6,10,8};
    int x = 16;
    if (hasArrayTwoCandidates(arr,6,x)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}