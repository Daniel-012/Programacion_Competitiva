/**
 * Problem: Reverse Integer
 * Link to problem: https://leetcode.com/problems/reverse-integer/
 * Coder: Daniel1209

 * @param {number} x
 * @return {number}
 */
const reverse = (x) => {
  let chain = []
  let passenger
  let negative = false

  if (x < 0) {
    negative = true
    x = (x * -1)
  } else if (x === 0) {
    return 0
  }

  while (x > 0) {
    passenger = x % 10
    chain += passenger
    x = Math.trunc((x / 10))
  }

  const reverseInt = parseInt(chain, 10)

  if (reverseInt > (2 ** 31 - 1)) {
    return 0
  }

  if (negative) {
    return reverseInt * -1
  }

  return reverseInt
}
