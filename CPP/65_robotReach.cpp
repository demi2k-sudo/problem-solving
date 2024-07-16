#include<iostream>
using namespace std;

int canReach(long long a, long long b, long long x) {
    long long minDistance = abs(a) + abs(b);
    if (minDistance == x) return true;
    if (minDistance > x) return false;
    if ((x-minDistance)%2==0) return true;
    return false;
}

int main(){
    cout<<canReach(2, 3, 4)<<endl;
    cout<<canReach(2, 3, 7)<<endl;
    return 0;
}
