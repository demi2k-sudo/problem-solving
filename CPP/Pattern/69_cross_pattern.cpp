#include<iostream>
#include<vector>
using namespace std;

string crossPattern(string S){
    // code here
    vector<vector<char>> answer(S.size(),vector<char>(S.size(),' '));
    string result = "";
    for(int i = 0;i<S.size();i++){
        answer[i][i] = S[i];
    }
    for(int i = 0;i<S.size();i++){
        answer[S.size()-1-i][i] = S[i];
    }
    for(int i =0; i< S.size();i++){
        for(int j=0; j<S.size(); j++){
            result+=answer[i][j];
        }
    }
    return result;
    
}

int main(){ 
    string S;
    cin>>S;
    cout<<crossPattern(S)<<endl;
    return 0;
}