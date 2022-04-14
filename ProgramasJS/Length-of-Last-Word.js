/**
 * Problem: Length of Last Word
 * Link to problem: https://leetcode.com/problems/length-of-last-word/
 * Coder: Daniel1209

 * @param {string} s
 * @return {number}
 */

const lengthOfLastWord = (s) => {
  let accountant = 0
  let i = (s.length - 1)
  if (s[i] === ' ') {
    while (s[i] === ' ' && i >= 0) {
      i--
    }
  }

  while (s[i] !== ' ' && i >= 0) {
    accountant++
    i--
  }
  return accountant
}
