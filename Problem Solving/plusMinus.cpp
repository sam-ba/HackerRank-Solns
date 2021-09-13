/* Given an array of integers entered by the user, calculate the ratio of its elements that are positive, negative, and zero. 
 * Print the value of each fraction on a new line with 6 places after the decimal
*/

#include <iostream>
#include <iomanip>

using namespace std; 

// Variable to hold the number of integers
int j = 0;

// Variable to hold the user's input
int a = 0;

// Variables that count the no of positive, negative, and zero integers
float pos, neg, zer = 0;

int main(){
    cout << "How many integers are you entering?" << endl;
    cin >> j;
    
    cout << "Enter a positive, negative, or zero integer: " << endl;
    cin >> a;

    if(a > 0){
        pos++;
    }

    else if(a < 0){
        neg++;
    }

    else{
        zer++;
    }

    cout << "The ratio of positive integers is: " << (pos/(double)j) << endl;

    return 0;
}