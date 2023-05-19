# Remove Duplicates from Sorted Array

## Problem Description

Given a sorted array of integers `nums`, your task is to remove the duplicates in-place such that each element appears only once, and return the new length of the modified array.

Do not allocate extra space for another array; you must modify the input array in-place with O(1) extra memory.

## Example

Input: nums = [1, 1, 2]
Output: 2
Explanation: After removing the duplicates, the modified array becomes [1, 2]. The function should return the new length, which is 2.

## Approach and Implementation

We can solve this problem using a two-pointer approach:

1. Initialize variables:
   - n as the size of the input array nums
   - k as 1 (initially, there is at least one unique element in the array)

2. Iterate over the array from index 0 to n-2:
   - Compare the current element nums[i] with the next element nums[i+1].
   - If they are different (indicating a new unique element):
     - Update the element at index k in the array nums with the current element nums[i+1].
     - Increment the value of k by 1 to track the new length of the modified array.

3. Return the value of k as the new length of the modified array (excluding duplicates).

```
  +------------------------------------+
  |                                    |
  |         Initialize n, k = 1        |
  |                                    |
  +-----------------+------------------+
                    |
                    v
  +-----------------+------------------+
  |                                    |
  |         Iterate i from 0 to n-2    |
  |                                    |
  +-----------------+------------------+
                    |
                    v
  +-----------------+------------------+
  |                                    |
  |    if nums[i] != nums[i+1]         |
  |       - Update nums[k]             |
  |       - Increment k                |
  |                                    |
  +-----------------+------------------+
                    |
                    v
  +-----------------+------------------+
  |                                    |
  |         Return k as the result     |
  |                                    |
  +-----------------+------------------+
```

## Here are some additional coding questions related to the "Remove Duplicates from Sorted Array" problem:

1. `**Remove Duplicates from Sorted Array II**`: Remove duplicates such that each element can appear at most twice in the modified array.

2. `**Remove Duplicates from Sorted Array in-place**`: Modify the array in-place without using extra memory and return the number of unique elements.

3. `**Remove Duplicates from Sorted Array and Count**`: Remove duplicates from the array and count the frequency of each unique element.

4. `**Remove Duplicates from Sorted Array with Given Duplicates**`: Remove specific duplicates provided in a separate array from the original sorted array while maintaining the sorted order.

Note: The exact requirements and variations may differ based on the specific coding question or interview scenario.
