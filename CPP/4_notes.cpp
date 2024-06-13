#include<iostream>

using namespace std;

void getNotes(int amount){
    int notes[]={2000,500,100,50,20,10,5,1};
    int count[8] = {0};
    for(int i =0; i<8; i++){
        if(amount>=notes[i]){
            count[i] = amount/notes[i];
            amount = amount%notes[i];
        }
    }
    cout<<"2000 : "<<count[0]<<endl;
    cout<<"500 : "<<count[1]<<endl;
    cout<<"100 : "<<count[2]<<endl;
    cout<<"50 : "<<count[3]<<endl;
    cout<<"20 : "<<count[4]<<endl;
    cout<<"10 : "<<count[5]<<endl;
    cout<<"5 : "<<count[6]<<endl;
    cout<<"1 : "<<count[7]<<endl;
}

int main(){
    int amount;
    cout<<"Enter the amount : ";
    cin>>amount;
    getNotes(amount);
}