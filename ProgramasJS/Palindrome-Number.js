/**
/**
 * Problem: Palindrome Number
 * Link to problem: https://leetcode.com/problems/palindrome-number/
 * Coder: Daniel1209

 * @param {number} x
 * @return {boolean}
 */
const isPalindrome = (x) => {
  if (x < 0) {
    return false;
  }
  // Con esta funcion se convierte un entero a una cadena de caracteres definiendo su base
  const string1 = x.toString(10);
  let j = (string1.length - 1);
  // console.log(stringNew);
  for (let i = 0; i < Math.trunc((string1.length / 2)); i++) {
    if (string1[i] !== string1[j]) {
      return false;
    }
    j--;
  }
  return true;
};
