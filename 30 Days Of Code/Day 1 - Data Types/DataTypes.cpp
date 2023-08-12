#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    // String variable for using getline
    string s2;
    
    // Declare second integer, double, and String variables.
    int j;
    double e;
    string t;
    
    // Read and save an integer, double, and String to your variables.
    getline(cin, s2);
    j = stoi(s2);
    
    getline(cin,s2);
    e = stod(s2);
    
    getline(cin,t);
        
    // Print the sum of both integer variables on a new line.
    cout << i+j << endl;
    
    // Print the sum of the double variables on a new line.
    // cout << d+e << endl;
    printf("%.1f\n",d+e);

    // Concatenate and print the String variables on a new line
    cout << s+t << endl;
    
    // The 's' variable above should be printed first.

    return 0;
}