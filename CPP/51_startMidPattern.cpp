#include<iostream>
using namespace std;

void printPattern(string s)
{
    int n = s.size()/2;
    for(int i=0;i<s.size();i++){
        for(int k=n;k<=(n+i);k++){
            cout<<s[k%s.size()];
        }
        cout<<"$ ";
    }
   //Your code here
}

int main()
{
    string s;
    cin>>s;
    printPattern(s);
    return 0;
}
