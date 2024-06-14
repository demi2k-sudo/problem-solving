#include<iostream>
using namespace std;

bool isLeapYear(int year) {
    if (year % 4 != 0) return false;
    if (year % 100 != 0) return true;
    if (year % 400 != 0) return false;
    return true;
}

// Function to count the number of days in a given month of a given year
int countDaysInMonth(int month, int year) {
    switch (month) {
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return 31;
    }
}

// Function to convert a date to the number of days since 01/01/0001
int dateToDays(int day, int month, int year) {
    int days = day;

    // Add days for the months passed in the current year
    for (int m = 1; m < month; ++m) {
        days += countDaysInMonth(m, year);
    }

    // Add days for the years passed
    for (int y = 1; y < year; ++y) {
        days += isLeapYear(y) ? 366 : 365;
    }

    return days;
}

int noOfDays(int d1, int m1, int y1, int d2, int m2, int y2) {

    int days1 = dateToDays(d1, m1, y1);
    int days2 = dateToDays(d2, m2, y2);

    return abs(days2 - days1);

}
int main() {

    int d1, m1, y1, d2, m2, y2;
    cout << "Enter the first date (dd mm yyyy): ";
    cin >> d1 >> m1 >> y1;
    cout << "Enter the second date (dd mm yyyy): ";
    cin >> d2 >> m2 >> y2;

    int ndays = noOfDays(d1, m1, y1, d2, m2, y2);
    cout << "The number of days between the two dates is: " << ndays << endl;

    return 0;
}