/*
There is a collection of input strings and a collection of query strings. For each query string, determine how many times it occurs in the list of input strings. Return an array of the results.

Example
strings = ['ab', 'ab', 'abc']
queries = ['ab', 'abc, 'bc']

There are 2 instances of 'ab', 1 of 'abc' and 0 of 'bc'. For each query, add an element to the return array,
results = [2, 1, 0].

Function Description
The function must return an array of integers representing the frequency of occurrence of each query string in strings.

matchingStrings has the following parameters:
    string strings[n] - an array of strings to search
    string queries[q] - an array of query strings

Returns
    int[q]: an array of results for each query

Input Format
The first line contains and integer n, the size of strings[].
Each of the next n lines contains a string strings[i].
The next line contains q, the size of queries[].
Each of the next q lines contains a string queries[i].

Constraints
1 <= n <= 1000
1 <= q <= 1000
1 <= |strings[i]|, queries[i]| <= 20.

Sample Input 1
4
aba
baba
aba
xzxb
3
aba
xzxb
ab

Sample Output 1
2
1
0

Sample Input 2
3
def
de
fgh
3
de
lmn
fgh

Sample Output 2
1
0
1

Sample Input 3
13
abcde
sdaklfj
asdjf
na
basdn
sdaklfj
asdjf
na
asdjf
na
basdn
sdaklfj
asdjf
5
abcde
sdaklfj
asdjf
na
basdn

Sample Output 3
1
3
4
3
2
*/

#include <iostream>

int n, q = 0;

using namespace std;

int main(){
    cin >> n;
    string strings[n];
    for(int i=0; i<n; i++){
        cin >> strings[i];
    }
    cin >> q;
    string queries[q];
    for(int i=0; i<q; i++){
        cin >> queries[i];
    }
    
    int counters[q] = {0};
    for(int i=0; i<q; i++){
        for(int j=0; j<n; j++){
            if(queries[i] == strings[j]){
                counters[i]++;
            }
        }
    }
    
    for(int i=0; i<q; i++){
        cout << counters[i] << endl;
    }
    
    return 0;
}