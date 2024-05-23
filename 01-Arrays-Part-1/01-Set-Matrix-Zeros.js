/*

leetcode link : https://leetcode.com/problems/set-matrix-zeroes/description/

Problem : Set matrix zeros

Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

Test case 1
Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]

Test case 2 
Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]

Follow up:

A straightforward solution using O(mn) space is probably a bad idea.
A simple improvement uses O(m + n) space, but still not the best solution.
Could you devise a constant space solution?

*/

const matrix = [
  [1, 1, 1],
  [1, 0, 1],
  [1, 1, 1],
];

const setZeros = (matrix) => {
  // handling edge case
  if (matrix.length === 0) {
    return;
  }

  // will store object of rows and cols, which we need to make empty(every element would be 0)
  const zerothIndices = { rows: [], cols: [] };

  for (let i = 0; i < matrix.length; i++) {
    for (let j = 0; j < matrix[i].length; j++) {
      if (matrix[i][j] === 0) {
        zerothIndices.rows.indexOf(i) === -1 && zerothIndices.rows.push(i);
        zerothIndices.cols.indexOf(j) === -1 && zerothIndices.cols.push(j);
      }
    }
  }

  // setting rows to zeros
  for (let i = 0; i < zerothIndices.rows.length; i++) {
    for (let j = 0; j < matrix[i].length; j++) {
      matrix[zerothIndices.rows[i]][j] = 0;
    }
  }

  // setting cols to zeros
  for (let i = 0; i < matrix.length; i++) {
    for (let j = 0; j < zerothIndices.cols.length; j++) {
      matrix[i][zerothIndices.cols[j]] = 0;
    }
  }
};

console.log(matrix);
setZeros(matrix);
console.log(matrix);
