/*
Given five positive integers, find the min and max values that can be calculated by summing exactly four of the 
five integers. Then print the respective min and max values as a single line of two space-separated long integers

Example
arr = [1,3,5,7,9]
The minimum sum is 1+3+5+7=16 and the maximum sum is 3+5+7+9=24. The function prints

16 24

Function Description
miniMaxSum has the following parameter(s):
    arr: an array of 5 integers

Print
Print two space-separated integers on one line: the minimum sum and the maximum sum 4 of 5 elements.

Input Format
A single line of five space-separated integers.

Constraints
1 <= arr[i] <= 10^9

Output Format
Print two space-separated long integers denoting the respective minimum and maximum values that can be calculated by 
summing exactly four of the five integers. (The output can be greater than a 32 bit integer.)

Sample Input
1 2 3 4 5

Sample Output
10 14

Explanation
The numbers are
1, 2, 3, 4, and 5. Calculate the following sums using four of the five integers:
    Sum everything except 1, the sum is 2+3+4+5=14.
    Sum everything except 2, the sum is 1+3+4+5=13.
    Sum everything except 3, the sum is 1+2+4+5=12.
    Sum everything except 4, the sum is 1+2+3+5=11.
    Sum everything except 5, the sum is 1+2+3+4=10.

Hints: Beware of integer overflow! Use 64-bit Integer.
*/

#include <iostream>

using namespace std;

// Variable to store the user's entry
int a = 0;

// Array to store all the entries
int arr[5];

int main(){
    cout << "Enter a single line of five space-separated integers: " << endl;

    for(int i=0; i<5; i++){
        cin >> a;
        arr[i] = a;
    }

    return 0;
}