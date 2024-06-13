#include <iostream>
#include <climits> // Include this header for LLONG_MIN
using namespace std;

long long maxSubarraySum(int arr[], int n) {
    long long sum = 0;
    long long maxi = LLONG_MIN; // Use LLONG_MIN instead of LONG_MIN
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum > maxi) maxi = sum;
        if (sum < 0) sum = 0;
    }
    return maxi;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    cout << maxSubarraySum(arr, 5) << endl;
    return 0;
}
