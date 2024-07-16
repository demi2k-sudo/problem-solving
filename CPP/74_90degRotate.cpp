#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
    int n = matrix.size();
    for(auto &i:matrix){
        reverse(i.begin(),i.end());
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
}

int main(){
    vector<vector<int> > matrix = {{1,2,3},{4,5,6},{7,8,9}};
    rotate(matrix);
    for(auto i:matrix){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}