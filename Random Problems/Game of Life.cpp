/* Problem Definition:

Given an n-by-n matrix, the following rules apply: 

1. Any live cell with fewer than two live neighbors dies, as if by underpopulation.

2. Any live cell with two or three live neighbors lives on to the next generation.

3. Any live cell with more than three live neighbors dies, as if by overpopulation.

4. Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction.

where a live cell is a 1 and a dead cell is a 0.

An example is: 
0 1 0 0 1

1 0 0 0 0

1 0 0 0 1

1 1 1 1 0
*/

/* Pseudocode: 

Given: the input matrix, the rules
Ask: implement the rules i.e. make the changes to the matrix
Unknowns: the number of neighbors
Assumptions: this is a one-time event for now, out of bounds can be 0
Output: the changed matrix

Rules: any 1s with neighbors < 2 changes to a 0
       any 1s with neighbors >= 2 || neighbors = 3 remains the same
       any 1s with neighbors > 3 changes to 0
       any 0s with neighbors = 3 changes to 1
       any 0s with neighbors < 3 || > 3 remains the same
*/