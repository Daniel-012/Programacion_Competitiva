/**
 * Problem: Longest Substring Without Repeating Characters
 * Link to problem: https://leetcode.com/problems/longest-substring-without-repeating-characters/
 * Coder: Daniel1209

 * @param {string} s
 * @return {number}
 */
const lengthOfLongestSubstring = (s) => {
  let actual = []
  let maximum = 0
  for (let j = 0; j < s.length; j++) {
    if (maximum >= (s.length - j) || maximum === 95) {
      break
    }
    actual = []
    for (let i = j; i < s.length; i++) {
      if (trueorfalse(actual, s[i])) {
        actual.push(s[i])
      } else {
        if (actual.length >= maximum) {
          maximum = actual.length
        }
        actual = []
        i--
      }
    }
    if (actual.length >= maximum) {
      maximum = actual.length
    }
  }
  return maximum
}

const trueorfalse = (vector, position) => {
  for (let j = 0; j < vector.length; j++) {
    if (vector[j] === position) {
      return false
    }
  }
  return true
}
