#include<iostream>
#include<vector>
using namespace std;

long long  numberOfPaths(int M, int N)
{
    vector <vector<long long>> table;
    // long long mod = 1e9+7;
    for(int i=0;i<M;i++){
        vector<long long> v(N,0);
        table.push_back(v);
    }
    table[0][0] = 1;
    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if(i+1<M) table[i+1][j] += table[i][j];
            if(j+1<N) table[i][j+1] += table[i][j];
        }
    }
    
    return table[M-1][N-1];
}

int main(){
    
    cout<<(numberOfPaths(1,1))<<endl;
    cout<<(numberOfPaths(2,3))<<endl;
    cout<<(numberOfPaths(3,2))<<endl;
    cout<<(numberOfPaths(3,3))<<endl;
    cout<<(numberOfPaths(18,18))<<endl;
}