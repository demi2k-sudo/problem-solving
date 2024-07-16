#include<bits/stdc++.h>
using namespace std;

class entry{
    public:
        int location;
        int distance;
        
        bool operator<(const entry& other) const {
            return location < other.location;
        }
};

class Solution{
public:
    int minThrow(int N, int arr[]){
        // code here
        int total = 31;
        int move[total];
        
        for(int i=0; i<total; i++) move[i] = -1;
        
        for(int i=0; i<N*2; i+=2){
            if(i%2==0){
                move[arr[i]] = arr[i+1];
            }
        }
        
        
        queue<entry> bfs_mem;
        entry runner,currEntry;
        runner.location = 1;
        runner.distance = 0;
        vector<int> visited(31,0);
        bfs_mem.push(runner);
        int curr;
        
        while(!bfs_mem.empty()){
            runner = bfs_mem.front();
            // cout<<runner.distance<<" "<<runner.location<<endl;
            bfs_mem.pop();
            if(runner.location == 30){
                break;
            }
            curr = runner.location;
            for(int i=curr+1;i<=curr+6 and i<31; i++){
                if(visited[i]==0){
                    currEntry.distance = runner.distance+1;
                    if(move[i]==-1) currEntry.location = i;
                    else currEntry.location = move[i];
                    visited[i] = 1;
                    bfs_mem.push(currEntry);
                    
                }
            }
        }
        
        return runner.distance;
        
        
    }
};

int main() {
    int t;
    cin >> t;
    int N;
    cin >> N;
    int arr[2*N];
    for (int i = 0; i < 2*N; i++) {
        cin >> arr[i];
    }

    Solution ob;
    cout << ob.minThrow(N, arr) << endl;

    return 0;
}