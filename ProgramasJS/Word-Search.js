/**
 * Problem: Word Search
 * Link to problem: https://leetcode.com/problems/word-search/
 * Coder: Daniel1209

 * @param {character[][]} board
 * @param {string} word
 * @return {boolean}
 */

let stope = false;

const route = (past, board, word, index, i, j) => {
  // console.log(i, j, index, past[i][j]);
  if (stope || i < 0 || i >= board.length || j < 0 || j >= board[0].length) {
    return 0;
  }
  if (past[i][j] || board[i][j] !== word[index]) {
    return 0;
  }
  if (board[i][j] === word[(word.length - 1)] && index === (word.length - 1)) {
    stope = true;
    return 0;
  }
  // console.log(board[i][j]);

  past[i][j] = true;
  route(past, board, word, (index + 1), (i - 1), j);
  route(past, board, word, (index + 1), i, (j - 1));
  route(past, board, word, (index + 1), (i + 1), j);
  route(past, board, word, (index + 1), i, (j + 1));
  past[i][j] = false;
};

const exist = (board, word) => {
  // eslint-disable-next-line prefer-const
  let past = [];
  if (stope) {
    stope = false;
  }
  for (let i = 0; i < board.length; i++) {
    past.push([]);
    for (let j = 0; j < board[0].length; j++) {
      past[i].push(false);
    }
  }
  // console.log(past);
  // Nota: Para recorrer las filas de un arreglo se pone [0] para apuntar a esa direccion
  for (let a = 0; a < board.length; a++) {
    for (let b = 0; b < board[0].length; b++) {
      if (board[a][b] === word[0]) {
        route(past, board, word, 0, a, b);
        if (stope) {
          return stope;
        }
      }
    }
  }

  return stope;
};
