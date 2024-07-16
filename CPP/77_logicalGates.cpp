#include<iostream>
#include<bits/stdc++.h>

using namespace std;

char eval(string s){
    char answer = s[0];
    for(int i=1; i<s.length(); i+=2){
        switch(s[i]){
            case 'A':{
                if(s[i+1]=='1' and answer=='1')
                    answer = '1';
                else answer = '0';
                break;
            }
            
            case 'B':{
                if(s[i+1]=='1' or answer=='1')
                    answer = '1';
                else answer = '0';
                break;
            }

            case 'C':{
                if(s[i+1]==answer) answer = '0';
                else answer = '1';
                break;
            }
        }
    }
    return answer;
}

int main()
{
    string s;
    cin>>s; //1C0C1C1A0B1 ----- A-and B-or and C-Xor
    cout<<eval(s);
}