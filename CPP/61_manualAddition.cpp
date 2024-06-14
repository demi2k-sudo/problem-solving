#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findSum(vector<int> &a, vector<int> &b) {
    // code here
    int carry=0;
    vector<int> result;
    if(a.size()>b.size()){
        reverse(b.begin(),b.end());
        while(a.size()!=b.size()){
            b.push_back(0);
        }
        reverse(b.begin(),b.end());
    }
    if(a.size()<b.size()){
        reverse(a.begin(),a.end());
        while(a.size()!=b.size()){
            a.push_back(0);
        }
        reverse(a.begin(),a.end());
    }
    
    for(int i=a.size()-1;i>=0;i--){
        int sum = a[i]+b[i]+carry;
        if(sum>9){
            carry = sum/10;
            result.push_back(sum%10);
        }
        else {
            carry = 0;
            result.push_back(sum);
        }
    }
    if(carry) result.push_back(carry);
    reverse (result.begin(),result.end());
    return result;
}

int main(){
    vector<int> a = {9,9,9,9,9,9,9};
    vector<int> b = {1};
    vector<int> result = findSum(a,b);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}