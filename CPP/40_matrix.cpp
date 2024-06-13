#include<iostream>
#include<vector>
using namespace std;

int sumOfMatrix(int N, int M, vector<vector<int>> Grid) {
    // code here
    int sum = 0;
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
            sum+=Grid[i][j];
    return sum;
}

int main(){
    vector<vector<int>> Grid = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<sumOfMatrix(3,3,Grid);
    return 0;
}