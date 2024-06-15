#include<iostream>
#include<unordered_map>
#include<set>
using namespace std;

int maxChars (string S)
{
    // your code here
    unordered_map<char,set<int>> imap;
    for(int i=0;i<S.size();i++){
        imap[S[i]].insert(i);
    }
    int max = -1;
    for(auto i:imap){
        if(i.second.size()>1){
            auto first = i.second.begin();
            auto last = i.second.end();
            last--;
            int difference = *last-*first-1;
            if(difference>max) max = difference;
        }
    }
    return max;
}

int main()
{
    string S;
    cin >> S;
    cout << maxChars(S) << endl;
    return 0;
}