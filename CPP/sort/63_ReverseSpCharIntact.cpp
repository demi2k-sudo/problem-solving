#include<iostream>
#include<string>
using namespace std;

string reverse(string str)
{ 
    string copy = str;
    int l = str.size()-1;
    for(int i = 0; i<str.size();i++){
        
        if((str[i]>='a' and str[i]<='z') or (str[i]>='A' and str[i]<='Z')){
            while(!((copy[l]>='a' and copy[l]<='z') or (copy[l]>='A' and copy[l]<='Z')))
                l--;
            if(l>=0)
                str[i] = copy[l--];
        }
    }
    return str;
} 

int main()
{
    string str = "a!!!b.c.d,e'f,ghi";
    cout<<reverse(str);
    return 0;
}
