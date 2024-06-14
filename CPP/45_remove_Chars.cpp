#include<iostream>
#include<unordered_set>
using namespace std;

string removeChars(string string1, string string2) {
    unordered_set <char> shelf;
    string result ="";
    for(auto i:string2) shelf.insert(i);
    for(auto i:string1){
        if (shelf.find(i)==shelf.end()){
            result+=i;
        }
    }
    return result;
}

int main(){
    string string1 = "elephant";
    string string2 = "ant";
    cout << removeChars(string1, string2);
    return 0;
}