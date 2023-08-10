# GCD of Strings

## Problem Statement

Given two strings `str1` and `str2`, you need to find the largest string `x` such that `x` divides both `str1` and `str2`.

## Problem Description

For two strings `s` and `t`, we say "t divides s" if and only if `s = t + ... + t` (i.e., `t` is concatenated with itself one or more times).

## Input

- Two strings `str1` and `str2` (1 <= |str1|, |str2| <= 1000) where |str1| and |str2| represent the lengths of the strings.

## Output

- Return the largest string `x` such that `x` divides both `str1` and `str2`. If no such string exists, return an empty string.

## Example

- Input:

  ```cpp
  str1 = "ABCABC"
  str2 = "ABC"

  ```

- Output:
  Explanation:

  ```
  str1 + str2 = ABCABCABC
  str2 + str1 = ABCABCABC
  str1 + str2 == str2 + str1
  return str.substr(0, gcd(size(str1), gcd(size(str2))))
  where gcd(3, 6) = 3
  So, answer is "ABC"
  ```

No common string that divides both str1 and str2 is found, so the answer is an empty string.

## Time Complexity

The time complexity of this solution is O(n), where n is the length of the longer string between str1 and str2.

## Space Complexity

The space complexity is O(1) as no extra space is used apart from a few variables.
