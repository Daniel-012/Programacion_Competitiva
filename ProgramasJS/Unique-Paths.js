/**
 * @param {number} m
 * @param {number} n
 * @return {number}
 */
const uniquePaths = (m, n) => {
  let matrix = []; // eslint-disable-line

  for (let i = 0; i < m; i++) {
    matrix.push([]);
    for (let j = 0; j < n; j++) {
      if (i === 0 || j === 0) {
        matrix[i].push(1);
      } else {
        matrix[i].push(matrix[(i - 1)][j] + matrix[i][(j - 1)])
      }
    }
  }
  return matrix[(m - 1)][(n - 1)];
};
