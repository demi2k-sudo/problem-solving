#include <iostream>
#include<unordered_map>
#include<set>
#include<vector>
using namespace std;

set<string> permutations;
void dive(string S,string perm="",unordered_map<int,char>visited = {},unordered_map<int,char>choices = {}){
    if (perm.length()==S.length()){
        permutations.insert(perm);
        return;
    }
    if (choices.empty()){
        for (int i = 0; i<S.length(); i++){
            choices[i] = S[i];
        }
    }
    for(auto i:choices){
        if(visited.find(i.first)==visited.end()){
            unordered_map<int,char> temp1 = visited;
            temp1[i.first] = i.second;
            unordered_map<int,char> temp2 = choices;
            temp2.erase(i.first);
            dive( S, perm+i.second, temp1, temp2);
        }
    }
}
vector<string>find_permutation(string S)
{
    dive(S);
    vector<string>result(permutations.begin(),permutations.end());
    return result;
}

int main(){
    string S = "ABC";
    vector<string>result = find_permutation(S);
    for(auto i:result){
        cout<<i<<" ";
    }
    return 0;
}