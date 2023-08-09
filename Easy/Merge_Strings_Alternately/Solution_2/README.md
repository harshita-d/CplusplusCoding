# Merge Strings Alternately

This repository contains a C++ solution to the problem of merging two strings alternately, following a specific pattern. The solution is implemented in the `Solution` class and the `mergeAlternately` method.

## Problem Description

You are given two strings `word1` and `word2`. Merge the strings by adding letters in alternating order, starting with `word1`. If a string is longer than the other, append the additional letters onto the end of the merged string.

## Solution

The provided C++ code implements a solution to the problem using the following approach:

1. Calculate the lengths of `word1` and `word2`.
2. Determine the minimum length, `minLen`, between the two words.
3. Iterate through the characters up to `minLen` in both `word1` and `word2`, appending characters alternately to the result string `s`.
4. After the alternating characters are appended, if `word1` has remaining characters, append them to `s`.
5. If `word2` has remaining characters, append them to `s`.

## Code Explanation

The code starts by calculating the lengths of the input strings `word1` and `word2`. It then uses a `for` loop to iterate up to the minimum length of the two words. During the iteration, characters from both `word1` and `word2` are alternately appended to the result string `s`.

After the alternating characters are appended, two additional loops handle the remaining characters from `word1` and `word2`, if any. These loops ensure that any extra characters from either string are appended to the end of the merged string.

## How to Use

To use this solution, you can follow these steps:

1. Make sure you have a C++ compiler installed on your system.
2. Copy the provided code from the repository's main file.
3. Create a new C++ source file in your development environment.
4. Paste the code into the new file.
5. Build and run the program to see the merged result of the input strings.

## Time Complexity

The time complexity of this solution is O(max(N, M)), where N is the length of `word1` and M is the length of `word2`. This is because the code iterates through the characters of both input strings once.

## Space Complexity

The space complexity is O(N + M), where N is the length of `word1` and M is the length of `word2`. This is due to the space required to store the merged string `s`.
