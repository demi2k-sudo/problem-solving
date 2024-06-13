#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int countDig(int i){
    int c = 0;
    if(i==0) return 1;
    while(i){
        c++;
        i/=10;
    }
    return c;
}
int isValid(string s) {
    int start = 0;
    int count = 0;
    for(int i=0;i<s.length()+1;i++){
        if(s[i]=='.'||s[i]=='\0'){
            if(s[i]=='.') count+=1;
            if(count>3) return 0;
            if(s[i]!='\0'&&s[i]==s[i+1]) return 0;
            if (!(all_of(s.begin()+start,s.begin()+i,::isdigit))) 
                return 0;
            int num = stoi(s.substr(start,i-start));
            // cout<<num<<" "<<s.substr(start,i-start)<<endl;
            if (s.substr(start,i-start).length()!=countDig(num)) return 0;
            if (!(num>=0&&num<=255)) 
                return 0;
            start = i+1;
        }
    }
    return (count==3)?1:0;
}

int main(){
    string s = "172.16.254.1";
    cout<<isValid(s)<<endl;
    //another example
    string s1 = "2001:0db8:85a3:0:0:8A2E:0370:7334";
    cout<<isValid(s1)<<endl;
    //another example
    string s2 = "256.256.256.256";
    cout<<isValid(s2)<<endl;
    s2 = "255.255.255.255";
    cout<<isValid(s2)<<endl;
    
    return 0;
}