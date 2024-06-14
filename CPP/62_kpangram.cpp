#include<iostream>
#include<set>
using namespace std;

bool kPangram(string word, int k)
{
    // code here 
    set<int> s;
    string str = "";
    for(auto i:word) if(i!=' ') str+=i;
    if(str.length()<26) return false;
    for(auto i:str) s.insert(i);
    if(s.size()==26) return true;
    return (str.length()<26)?k>=str.length()-s.size():k>=26-s.size();
}

int main()
{
    string str;
    int k;
    cin>>str>>k;
    cout<<kPangram(str,k)<<endl;
    return 0;
}