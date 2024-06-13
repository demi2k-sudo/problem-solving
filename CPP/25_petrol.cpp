#include<iostream>
using namespace std;

//The structure of petrolPump is  
struct petrolPump
{
    int petrol;
    int distance;
};


int tour(petrolPump p[],int n)
{
    int tank=0,start=0;
    for(int i=0;i<n*2+1;i++){
        // cout<<tank<<endl;
        // cout<<p[i%n].petrol<<" "<<p[i%n].distance<<endl;
        tank+=(p[i%n].petrol-p[i%n].distance);
        // cout<<i<<" "<<start<<"|"<<tank<<endl;
        if((start%n==(i+1)%n)&&(tank>=0)){
            return start%n;
        }
        if (tank<0){
            while(tank<0&&start<=i){
                        
                // cout<<"=="<<i<<" "<<start<<"|"<<tank<<endl;
                tank-=(p[start%n].petrol-p[start%n].distance);
                start++;
            }
        }
    }
    return -1;
}