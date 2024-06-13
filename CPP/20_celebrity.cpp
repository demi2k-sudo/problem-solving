#include<iostream>
#include<vector>
using namespace std;

int celebrity(vector<vector<int> >& M, int n) 
{
    // code here 
    int celeb = -1;
    for(int i=0;i<n;i++){
        int sum1 = 0;
        int sum2 = 0;
        for(int j=0;j<n;j++){
            sum1+=M[j][i];
            sum2+=M[i][j];
        if (sum2==0 &&sum1==M.size()-1) celeb=i;
        }
    }
    return celeb;
}

int main(){
    vector<vector<int> > M = {{0,0,1,0},
                               {0,0,1,0},
                               {0,0,0,0},
                               {0,0,1,0}};
    cout<<celebrity(M,4);
    return 0;
}