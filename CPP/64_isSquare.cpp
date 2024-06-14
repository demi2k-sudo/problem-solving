#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int distance(int x1, int y1, int x2, int y2){
    return ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)); 
}
string isSquare(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
    // code here
    vector<int> distances;
    
    distances.push_back(distance(x1,y1,x2,y2));
    distances.push_back(distance(x1,y1,x3,y3));
    distances.push_back(distance(x1,y1,x4,y4));
    distances.push_back(distance(x2,y2,x3,y3));
    distances.push_back(distance(x2,y2,x4,y4));
    distances.push_back(distance(x3,y3,x4,y4));
    
    sort(distances.begin(),distances.end());
    
    return(
        distances[0]>0 and
        distances[0]==distances[1] and
        distances[1]==distances[2] and
        distances[2]==distances[3] and
        distances[4]==distances[5] and
        distances[4]==2*distances[0]
        )?"Yes":"No";
}

int main (){
    
    cout<<isSquare(20, 10, 10, 20, 5, 5, 10, 10)<<endl;
    cout<<isSquare(0, 0, 0, 10, 10, 0, 10, 10)<<endl;
    cout<<isSquare(0, 0, 0, 5, 5, 0, 5, 5)<<endl;

    return 0;
}