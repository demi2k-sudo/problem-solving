#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define MAX 10
long long binToDec(vector<int> vec){
    long long res = 0;
    for(int i=0;i<vec.size();i++){
        res+=pow(2,vec.size()-i-1)*vec[i];
    }
    return res;
}

vector<int> decToBin(long long dec,int n){
    vector<int> res(n,0);
    int index = 0;
    while(dec){
        res[index++] = dec%2;
        dec/=2;
    }
    reverse(res.begin(),res.end());
    return res;
}

vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
{
    //Your code here
    vector<vector<int>> result;
    if(row==1 and col==1){
        if (M[0][0]==1) result={{1}};
        else result={{0}};
        return result;
    }
    else if (row==1){
        vector<int> answer;
        for (int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                answer.push_back(M[i][j]);
            }
        }
        result.push_back(answer);
        return result;
    }
    vector<long long> uniqueDec;
    set<long long> visited;
    for (int i=0;i<row;i++){
        vector<int> single;
        for(int j=0;j<col;j++){
            single.push_back(M[i][j]);
        }
        long long num = binToDec(single);
        if(visited.find(num)==visited.end()){
            uniqueDec.push_back(num);
            visited.insert(num);
        }
    }
    for(auto i:uniqueDec){
        result.push_back(decToBin(i,col));
    }
    
    return result;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int M[MAX][MAX];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> M[i][j];
        }
    }
    vector<vector<int>> res = uniqueRow(M, n, m);
    cout<<endl;
    for(int i=0; i<res.size(); i++) {
        for(int j=0; j<res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}