/*
HackerLand University has the following grading policy:
    Every student receives a grade in the inclusive range from 0 to 100.
    Any grade less than 40 is a failing grade.

Sam is a professor at the university and likes to round each student's grade according to these rules:
    If the difference between the grade and the next multiple of is 5 less than 3, round grade up to the next multiple of 5.
    If the value of grade is less than 38, no rounding occurs as the result will still be a failing grade.

Examples
    grade = 84 round to 85 (85 - 84 is less than 3)
    grade = 29 do not round (result is less than 40)
    grade = 57 do not round (60 - 57 is 3 or higher)

Given the initial value of grade for each of Sam's n students, write code to automate the rounding process.

Function Description
gradingStudents has the following parameter(s):
    int grades[n]: the grades before rounding

Returns
    int[n]: the grades after rounding as appropriate

Input Format
The first line contains a single integer, n, the number of students.
Each line i of the subsequent n lines contains a single integer, grades[i].

Constraints
    1 <= n <= 60
    0 <= grades[i] <= 100

Sample Input 0
4
73
67
38
33

Sample Output 0

75
67
40
33
*/

#include <iostream>

using namespace std;

int n, a = 0;

int gradingStudents(int arr[n]);

int main(){
    int grades[n];
    cout << "How many grades are you entering?" << endl;
    cin >> n;

    for(int i=0; i<n; i++){
        cout << "Enter the students' grades: " << endl;
        cin >> a;
        grades[i] = a;
    }

    gradingStudents(grades[n]);

    return 0;
}

int gradingStudents(int arr[n]){
    int rem = 0;

    for(int i=0; i<n; i++){
        if(arr[i] >= 38){
            rem = arr[i] % 5;
            if(rem < 3){
                arr[i] += 5 - rem;
            }
        }
    }

    return arr[n];
}