#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string printLargest(int n, vector<string> &arr) {
    // code here
    sort(arr.begin(),arr.end(),[](string a, string b){
        return ((a+b)>(b+a));
    });
    string result = "";
    for(auto i:arr) result+=i;
    return result;
}

int main(){
    vector<string> arr = {"54","546","548","60"};
    cout<<printLargest(4,arr);
    return 0;
}