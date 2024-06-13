#include<iostream>
#include<map>
using namespace std;

int romanToDecimal(string &str) {
    map<char,int> table;
    table['I'] = 1;
    table['V'] = 5;
    table['X'] = 10;
    table['L'] = 50;
    table['C'] = 100;
    table['D'] = 500;
    table['M'] = 1000;
    int result = 0;
    char prev = '0';
    for(int i=0;i<str.length();i++){
        if (table[prev]<table[str[i]]){
            result += table[str[i]] - 2*table[prev]; 
            prev = str[i];
        }
        else{
            result += table[str[i]];
            prev = str[i];
        }
        
    }
    return result;
}

int main(){
    string str = "MCMIV";
    cout<<romanToDecimal(str);
}