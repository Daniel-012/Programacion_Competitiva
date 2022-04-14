/**
 * Problem: Median of Two Sorted Arrays
 * Link to problem: https://leetcode.com/problems/median-of-two-sorted-arrays/
 * Coder: Daniel1209

 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
const findMedianSortedArrays = (nums1, nums2) => {
  let maximum = 0
  const vector = []

  if (nums1.length >= nums2.length) {
    maximum = nums1.length
  } else {
    maximum = nums2.length
  }

  for (let i = 0; i < maximum; i++) {
    if (nums1.length > i) {
      vector.push(nums1[i])
    }
    if (nums2.length > i) {
      vector.push(nums2[i])
    }
  }

  vector.sort((a, b) => {
    return a - b
  })

  const middle = Math.trunc((vector.length / 2))

  if ((vector.length % 2) === 0) {
    return ((vector[middle] + vector[middle - 1]) / 2)
  }
  return vector[middle]
}
