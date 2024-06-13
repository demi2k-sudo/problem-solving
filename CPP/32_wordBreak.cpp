#include<iostream>
#include<vector>
using namespace std;

int wordBreak(int n, string s, vector<string> &dictionary) {
        //code here
    if (s == "") return true;
    
    for(auto i:dictionary){
        if(s.substr(0,i.length())==i){
            if(wordBreak(n,s.substr(i.length()),dictionary)){
                return true;
            }
        }
    }
    
    return false;
}

int main(){
    int n;
    string s;
    cin>>n>>s;
    vector<string> dictionary;
    string temp;
    for(int i=0; i<n; i++){
        cin>>temp;
        dictionary.push_back(temp);
    }
    cout<<wordBreak(n, s, dictionary);
    return 0;
}