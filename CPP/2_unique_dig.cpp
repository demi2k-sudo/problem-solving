#include <iostream>
#include <vector>
#include <set>
using namespace std;

vector<int>  common_digits(vector<int>nums){
    vector <bool> digits(10);
    for(auto temp: nums){
        while(temp){
            digits[temp%10]=true;
            temp = temp/10;
        }
    }
    vector<int> result;
    for(int i=0;i<10;i++){
        if (digits[i]){
            result.push_back(i);
        }
    }
    return result;
}  

int main(){
    vector<int> v = {567,890,241};
    v = common_digits(v);
    for(auto i:v) cout<<i<<endl;
}