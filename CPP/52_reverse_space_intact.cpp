#include<iostream>
using namespace std;

string reverseWithSpacesIntact(string S) {
    int n = S.length();
    string result = S;  // Copy S to result to preserve spaces in their original places
    int j = n - 1;

    // Traverse the string from the end and place characters in the result
    for (int i = 0; i < n; ++i) {
        if (S[i] != ' ') {
            // Skip spaces in the result string
            while (result[j] == ' ') {
                j--;
            }
            result[j] = S[i];
            j--;
        }
    }
    return result;
}

int main() {
    string S = "I Love Coding";
    cout << reverseWithSpacesIntact(S) << endl;
    return 0;
}