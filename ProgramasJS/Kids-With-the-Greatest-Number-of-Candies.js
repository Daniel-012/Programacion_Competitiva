/**
 * Problem: Kids With the Greatest Number of Candies
 * Link to problem: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
 * Coder: Daniel1209

 * @param {number[]} candies
 * @param {number} extraCandies
 * @return {boolean[]}
 */

const kidsWithCandies = (candies, extraCandies) => {
  let maximumQuantity = 0
  let list = []
  list = []

  candies.forEach((boy) => {
    if (boy >= maximumQuantity) {
      maximumQuantity = boy
    }
  })

  candies.forEach((actual) => {
    if ((actual + extraCandies) >= maximumQuantity) {
      list.push(true)
    } else {
      list.push(false)
    }
  })

  return list
}
