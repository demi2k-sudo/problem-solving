#include <iostream>
#include <unordered_map>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

bool sameFreq(string s)
{
    unordered_map<char,int> counts;
    for(auto i:s){
        if(counts[i]) counts[i]+=1;
        else counts[i]=1;
    }
    set<int> distinct;
    vector<int> c;
    for(auto i:counts){
        distinct.insert(i.second);
        c.push_back(i.second);
        // cout<<i.first<<"-->"<<i.second<<endl;
    }
    if(distinct.size()==1) return true;
    else if (distinct.size()>2) return false;
    else{
        auto first = distinct.begin();
        auto second = std::next(first); 
        int difference = *second - *first;
        if(*first==1 or *second==1){
            if(count(c.begin(),c.end(),1)==1) return true;
        }
        if(abs(difference)==1 ){
            int maxi = max(*first,*second);
            int h = count(c.begin(),c.end(),maxi);
            if(h==1) return true;
            else return false;
        }
        
        else return false;
    }
}

int main()
{
    string s;
    cin>>s;
    cout<<sameFreq(s);
    return 0;
}