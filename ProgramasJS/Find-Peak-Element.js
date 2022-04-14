/**
 * Problem: Find Peak Element
 * Link to problem: https://leetcode.com/problems/find-peak-element/
 * Coder: Daniel1209

 * @param {number[]} nums
 * @return {number}
*/
const findPeakElement = (nums) => {
  if (nums.length === 1) {
    return 0
  } else if (nums[0] > nums[1]) {
    return 0
  } else if (nums[(nums.length - 1)] > nums[(nums.length - 2)]) {
    return (nums.length - 1)
  }
  for (let i = 1; i < (nums.length - 1); i++) {
    if (nums[i] > nums[(i - 1)] && nums[i] > nums[(i + 1)]) {
      return i
    }
  }
}