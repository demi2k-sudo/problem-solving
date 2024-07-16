#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n){
	    vector<int> result;
	    int k;
	    cin>>k;
	    while(k){
	        int m;
	        cin>>m;
	        result.push_back(m);
	        k--;
	    }
	    map <int,int> table;
	    for (auto i:result){
	        if (table[i]){
	            table[i]+=1;
	        }
	        else{
	            table[i]=1;
	        }
	    }
	    vector<pair<int,int>> sortedTable(table.begin(),table.end());
	    sort(sortedTable.begin(), sortedTable.end(), []( pair<int, int>& a,  pair<int, int>& b) {
            if (a.second != b.second)
                return a.second > b.second;
            else
                return a.first < b.first;
        });
        for(auto i:sortedTable){
	        for(int h=0;h<i.second;h++){
	            cout<<i.first<<" ";
	        }
	    }
	    cout<<endl;
	    n--;
	}
	return 0;
}