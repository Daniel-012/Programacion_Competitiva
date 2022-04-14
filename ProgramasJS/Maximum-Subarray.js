/**
 * Problem: Maximum Subarray
 * Link to problem: https://leetcode.com/problems/maximum-subarray/
 * Coder: Daniel1209

 * @param {number[]} nums
 * @return {number}
 */

const maxSubArray = (nums) => {
  let maximum = -1000000;
  let sum = 0;

  for (let i = 0; i < nums.length; i++) {
    if (nums[i] > maximum) maximum = nums[i];
    if (nums[i] > 0) {
      sum = nums[i];
      while (sum > 0 && i < nums.length) {
        if (sum >= maximum) {
          maximum = sum;
        }
        i++;
        sum += nums[i];
      }
    }
  }

  return maximum;
};
