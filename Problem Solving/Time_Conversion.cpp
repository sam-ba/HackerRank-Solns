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
    // Variable to hold the result
    string product;

    // Isolate the hour
    string temp = a.substr(0, 2);
    int hour = stoi(temp);      // stoi - string to int

    // If the time is PM
    if(a[8] == 'P'){
        cout << "This is PM!" << endl;
        cout << "The hour is: " << hour << endl;
        // Add 12 to the hour to convert to 24-hour clock
        if(hour + 12 < 24){
            hour = hour + 12;
            temp = to_string(hour);
        }
    }
    // If the time is AM
    else if(a[8] == 'A'){
        cout << "This is AM!" << endl;
        cout << "The hour is: " << endl;
        // If the time is 12am
        if(hour == 12){
            temp = "00";
        }
    }
    
    product = a.replace(0,2,temp).erase(a.size()-2);    // replace the hour and remove the 'AM'/'PM'
    return product;
}