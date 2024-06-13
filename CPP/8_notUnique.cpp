#include<iostream>
#include<vector>
#include<unordered_set>
#include<set>
using namespace std;

vector<int> duplicates(long long arr[], int n) {
    unordered_set<int> visited;
    set<int> result;
    vector<int>final;
    for(int i=0; i<n; i++){
        if(visited.find(arr[i])!=visited.end()){
            result.insert(arr[i]);
        }
        else{
            visited.insert(arr[i]);
        }
    }
    final.assign(result.begin(),result.end());
    return (final.size()==0)?std::vector<int>{-1}:final;
}

int main(){
    long long arr[]={1,2,3,1,3,6,6};
    vector<int>ans=duplicates(arr,7);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}