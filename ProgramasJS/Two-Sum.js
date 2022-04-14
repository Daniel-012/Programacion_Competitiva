/**
 * Problem: Two Sum
 * Link to problem:  https://leetcode.com/problems/two-sum/
 * Coder: Daniel1209

 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */

const twoSum = (nums, target) => {
  let indices = []
  let suma = 0
  indices = []
  for (let i = 0; i < (nums.length - 1); i++) {
    for (let j = i + 1; j < nums.length; j++) {
      suma = nums[i] + nums[j]
      if (suma === target) {
        indices.push(i)
        indices.push(j)
        return indices
      }
    }
  }

  return indices
}
