/**
 * Problem: Longest Palindromic Substring
 * Link to problem: https://leetcode.com/problems/longest-palindromic-substring/
 * Coder: Daniel1209

 * @param {string} s
 * @return {string}
 */
const longestPalindrome = (s) => {
  let primer = []
  primer = []

  for (let i = 2; i < 1010; i++) {
    primer.push(true)
  }

  for (let i = (primer.length - 1); i >= 0; i--) {
    if (i === 0 || s.length === 1) {
      return s[0]
    } else if (s.length === 0) {
      return s
    } else if (i <= s.length) {
      for (let j = 0; j < s.length; j++) {
        if ((j + i) > s.length) {
          break
        } else if (s[j] === s[(j + i - 1)]) {
          if (itIsPalindromin(s, j, Math.trunc((i / 2)) + j, i)) {
            return s.substring(j, j + i)
          }
        }
      }
    }
  }
}

const itIsPalindromin = (s, j, i, v) => {
  v--
  for (j; j < i; j++) {
    if (s[j] !== s[v + j]) {
      return false
    }
    v -= 2
  }
  return true
}
