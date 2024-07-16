#include<iostream>
using namespace std;

string convertToWords(long n) {
    if (n == 0) {
        return "zero";
    }

    string words = "";

    string ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
                      "seventeen", "eighteen", "nineteen"};
    string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    if (n >= 10000000) {
        words += convertToWords(n / 10000000) + " crore ";
        n %= 10000000;
        if(n<100){
            words+="and ";
        }
    }

    if (n >= 100000) {
        words += convertToWords(n / 100000) + " lakh ";
        n %= 100000;
        if(n<100){
            words+="and ";
        }
    }

    if (n >= 1000) {
        words += convertToWords(n / 1000) + " thousand ";
        n %= 1000;
        if(n<100){
            words+="and ";
        }
    }

    if (n >= 100) {
        words += ones[n / 100] + " hundred";
        n %= 100;
        if (n != 0) {
            words += " and ";
        }
    }

    if (n >= 20) {
        words += tens[n / 10];
        if (n % 10 != 0) {
            words += " " + ones[n % 10];
        }
    } else if (n >= 10) {
        words += teens[n - 10];
    } else if (n > 0) {
        words += ones[n];
    }

    return words;
}

int main(){
    long n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<convertToWords(n);
    return 0;
}