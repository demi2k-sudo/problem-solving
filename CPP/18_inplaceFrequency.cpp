#include<iostream>
#include<vector>
using namespace std;

void frequencyCount(vector<int>& arr,int N, int P)
{ 
    int i = 0;
    while(i<N){
        if(arr[i]<=0){
            i++;
        }
        else{
            if(arr[i]<=N&&arr[i]<=P){
                if (arr[arr[i]-1]>0){
                    int temp = arr[i]-1;
                    swap(arr[i],arr[arr[i]-1]);
                    arr[temp] = -1;
                }
                else{
                    arr[arr[i]-1]-=1;
                    arr[i]=0;
                } 
            }
            else{
                arr[i]=0;
            }
            
        }
    }
    for(int i=0;i<N;i++) arr[i]*=-1;
}

int main(){
    vector<int> arr = {2, 3, 3, 2, 5};
    int N = arr.size();
    int P = 5;
    frequencyCount(arr, N, P);
    for(int i=0;i<N;i++) cout<<arr[i]<<" ";
    return 0;
}

/*
Time Complexity: O(N)
Space Complexity: O(1)*/