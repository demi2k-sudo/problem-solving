#include<iostream>
#include<algorithm>
using namespace std;

long long getNextEven(string x)
{
    // Your code goes here 
    string ans;
    while(next_permutation(x.begin(),x.end()))
    {
        if((x[x.length()-1]-'0')%2==0)
        return stoll(x);
    }
    return -1;
}

int main()
{
    string n;
    cin>>n;
    cout<<getNextEven(n);
}