/* 
From: https://www.hackerrank.com/challenges/one-month-preparation-kit-plus-minus/problem?h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=one-month-preparation-kit&playlist_slugs%5B%5D=one-month-week-one

Given an array of integers entered by the user, calculate the ratio of its elements that are positive, negative, and zero. 
Print the value of each fraction on a new line with 6 places after the decimal
*/

#include <iostream>
#include <iomanip>

using namespace std; 

// Variable to hold the number of integers
float j = 0.0;

// Variable to hold the user's input
int a = 0;

// Variables that count the no of positive, negative, and zero integers
float pos, neg, zer = 0.0;

int main(){
    // Prompt the user to enter the number of integers they plan to enter
    cout << "How many integers are you entering?" << endl;
    cin >> j;

    // Loop through all the entries
    for(int i=0; i<j; i++){
        cout << "Enter a positive, negative, or zero integer: " << endl;
        cin >> a;

        // Check for positive integer
        if(a > 0){
        pos++;
        }

        // Check for negative integer
        else if(a < 0){
        neg++;
        }

        // Check for zero integer
        else{
        zer++;
        }
    }
    
    printf("The ratio of positive integers is: %.6f \n", pos/j);
    printf("The ratio of negative integers is: %.6f \n", neg/j);
    printf("The ratio of zero integers is: %.6f \n", zer/j);

    return 0;
}