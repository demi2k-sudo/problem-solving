#include<iostream>
using namespace std;

bool isSubSequence(string A, string B) 
{
    // code here
    int chk = 0;
    for(int i=0;i<B.length();i++){
        if (B[i]==A[chk]){
            chk++;
            if(chk==A.length()){
                return true;
            }
        }
    }
    return false;
}

int main(){
    string A = "gksrek";
    string B = "geeksforgeeks";
    cout<<isSubSequence(A,B);
    return 0;   
}