#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

vector<int> findMissing(int a[], int b[], int n, int m) 
{
    vector<int> result;
    unordered_set<int> shelf(b,b+m);
    for(int i=0; i<n;i++){
        if(shelf.find(a[i])==shelf.end()) result.push_back(a[i]);
    }
    return result;
    // Your code goes here
} 

int main()
{
    int a[] = {1,2,3,4,5,6};
    int b[] = {1,2,3,4,5,6,7,8,9,10};
    vector<int> result = findMissing(a,b,6,10);
    for(int i=0; i<result.size();i++) cout<<result[i]<<" ";
    return 0;
}