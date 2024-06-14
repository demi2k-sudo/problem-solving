#include <iostream>
using namespace std;

int isLeap(int N){
    //code here
    if (N%100==0 and N%400==0) return true;
    else if (N%4==0 and N%100!=0) return true;
    return false;
}

int main(){
    cout<<isLeap(2000);
    //another example
    cout<<isLeap(2020);
}
