#include<iostream>
#include<cmath>
using namespace std;

bool isPowerOfAnother(long long X, long long Y) {
    if (Y <= 0 || X <= 1) return false;
    double logResult = log(Y) / log(X);
    return (logResult - floor(logResult) < 1e-10);
}

int main() {
    long long X, Y;
    cin >> X >> Y;
    cout << (isPowerOfAnother(X, Y) ? "YES" : "NO");
    return 0;
}