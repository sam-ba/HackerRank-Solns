/*
From: https://www.hackerrank.com/challenges/one-month-preparation-kit-time-conversion/problem?h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-one

Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.
Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock. 
      - 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.

Example
s = '12:01:00PM'
Return '12:01:00'.
s = '12:01:00AM'
Return '00:01:00'.

Function Description
It should return a new string representing the input time in 24 hour format.

timeConversion has the following parameter(s):
string s: a time in 12 hour format

Returns
string: the time in 24 hour format

Input Format
A single string s that represents a time in 12-hour clock format (i.e. hh:mm:ssAM or hh:mm:ssPM).

Constraints
All input times are valid

Sample Input
07:05:45PM

Sample Output
19:05:45
*/

#include <iostream>

using namespace std;

string timeConversion(string a);

int main(){
    cout << "Please enter a time in the 12-hour format (hh:mm:ssAM): " << endl;
    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout << "The time in 24-hour format is: " << result << endl;

    return 0;
}

string timeConversion(string a){
    string product;

    if(a[8] == 'P'){
        cout << "This is PM" << endl;
        int temp = a.substr(0, 2);      // Error here as int != string
        cout << "The hour is: " << endl;
    }
}