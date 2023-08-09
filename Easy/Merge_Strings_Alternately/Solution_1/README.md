# Merge Strings Alternately

## Problem Statement

This code provides a solution to the problem of merging two strings alternately, starting with the first string.

## Problem Description

Given two strings `word1` and `word2`, the code merges the strings by adding letters in alternating order, starting with `word1`. If one string is longer than the other, any additional letters are appended to the end of the merged string.

## Input

The input consists of two strings `word1` and `word2`.

## Output

The output is a single string representing the merged result of `word1` and `word2` following the alternating merging rules.

## Code Explanation

The given code defines a class `Solution` with a member function `mergeAlternately` that takes two string arguments: `word1` and `word2`. It uses two indices `i` and `j` to track the positions in `word1` and `word2`, respectively. The loop runs until either index `i` reaches the length of `word1` or index `j` reaches the length of `word2`. Within the loop, the code appends characters from `word1` and `word2` to the result string `s` if they are available, and then increments the corresponding index.

## Time Complexity

The time complexity of this solution is **O(max(N, M))**, where N is the length of `word1` and M is the length of `word2`. In the worst case, both strings are of equal length, and the loop will run N (or M) times.

## Space Complexity

The space complexity is O(N + M), where N is the length of `word1` and M is the length of `word2`. This is due to the space required to store the merged string.

## Additional Questions

Here are some additional coding questions related to the "Merge Strings Alternately" problem:

- [zigzag iterator](https://leetcode.com/problems/zigzag-iterator/description/)
- [Link to Additional Question 2]()
