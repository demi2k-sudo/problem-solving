#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

string modify (string s)
{   
    unordered_set<char> vowels = {'a','e','i','o','u'};
    vector<int> indices;
    vector<int> chars;
    
    for(int i=0;i<s.length();i++){
        if(vowels.find(s[i])!=vowels.end()){
            indices.push_back(i); 
            chars.push_back(s[i]); 
        }
    }
    reverse(chars.begin(),chars.end());
    for(int i=0;i<chars.size();i++){
        s[indices[i]] = chars[i];
    }
    
    return s;
}

int main()
{
    cout<<modify("hello")<<endl;
    return 0;
}