# Kids With the Greatest Number of Candies

## Problem Statement

There are `n` kids with candies. You are given an integer array `candies`, where each `candies[i]` represents the number of candies the `i`-th kid has, and an integer `extraCandies`, denoting the number of extra candies that you have.

Return a boolean array `result` of length `n`, where `result[i]` is `true` if, after giving the `i`-th kid all the `extraCandies`, they will have the greatest number of candies among all the kids, or `false` otherwise.

Note that multiple kids can have the greatest number of candies.

## Problem Description

Given an array of integers `candies` and an integer `extraCandies`, you need to determine for each kid if they can have the greatest number of candies after adding the `extraCandies`.

## Input

- An integer array `candies` of length `n` (1 <= n <= 100) where `candies[i]` (1 <= candies[i] <= 100) represents the number of candies the `i`-th kid has.
- An integer `extraCandies` (1 <= extraCandies <= 50), denoting the number of extra candies you have.

## Output

- A boolean array `result` of length `n`, where `result[i]` is `true` if, after giving the `i`-th kid all the `extraCandies`, they will have the greatest number of candies among all the kids, or `false` otherwise.

## Example

- Input:
  ```cpp
  candies = [2,3,5,1,3]
  extraCandies = 3
  Output: [true,true,true,false,true]
  Explanation:
  Kid 0: 2 + 3 = 5 (greatest).
  Kid 1: 3 + 3 = 6 (greatest).
  Kid 2: 5 + 3 = 8 (greatest).
  Kid 3: 1 + 3 = 4.
  Kid 4: 3 + 3 = 6 (greatest).
  ```

## Time Complexity

The time complexity of this solution is O(n), where n is the number of kids (length of the candies array).

## Space Complexity

The space complexity is O(n) due to the space used by the res array.
