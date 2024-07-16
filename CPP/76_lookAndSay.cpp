#include<bits/stdc++.h>
using namespace std;

string lookandsay(int n) {
    // code here
    string newString = "";
    string old = "1";
    int count = 1;
    while(n-1){
        // cout<<old<<endl;
        for(int i = 1; i<old.length(); i++){
            // cout<<"adads"<<endl;
            if(old[i]!=old[i-1]){
                newString+=to_string(count)+old[i-1];
                count = 1;
            }
            else count++;
        }
        newString+=to_string(count)+old[old.length()-1];
        count =1;
        old = newString;
        newString = "";
        n--;
    }
    return old;
}

int main(){
    cout<<lookandsay(5);
    return 0;
}