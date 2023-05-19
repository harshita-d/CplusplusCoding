# Palindrome String

This solution is for the "Palindrome String" problem on InterviewBit. The problem requires determining if a given string is a palindrome or not. A palindrome is a string that remains the same when read forward or backward. The solution handles cases where spaces, special characters, and case should be ignored. Only alphanumeric characters are considered for palindrome comparison.

## Problem Statement

Given a string, determine if it is a palindrome. While checking for a palindrome, you have to ignore spaces, case, and all special characters; i.e., consider only alphanumeric characters.

## Input
The function isPalindrome takes a single parameter A, which is a string.

## Output
The function should return an integer: 1 if the input string is a palindrome, and 0 otherwise.

## Solution
The solution approach is as follows:

1. Initialize two pointers, `i` and `j`, to the start and end of the string respectively.
2. While `i` is less than or equal to `j`, repeat steps 3-8.
3. Check if both characters at indices `i` and `j` are alphanumeric using the `isalnum` function.
    - If they are alphanumeric, continue to step 4.
    - If not, continue to step 7.
4. Convert both characters to lowercase using the `tolower` function and compare them.
    - If they are equal, move `i` one step forward and `j` one step backward.
    - If they are not equal, return 0 (indicating that the string is not a palindrome).
5. Repeat steps 3-4 until `i` and `j` cross each other.
6. If all the characters have been compared and found to be equal, return 1 (indicating that the string is a palindrome).
7. If the character at index `i` is not alphanumeric, move `i` one step forward.
8. If the character at index `j` is not alphanumeric, move `j` one step backward.
9. Repeat steps 3-8 until `i` and `j` cross each other.

```
Start
|
|__ Initialize i = 0
|__ Initialize j = length(A) - 1
|
|__ While i <= j
|   |
|   |__ If A[i] and A[j] are alphanumeric
|   |   |
|   |   |__ If lowercase(A[i]) == lowercase(A[j])
|   |   |   |
|   |   |   |__ Increment i by 1
|   |   |   |__ Decrement j by 1
|   |   |
|   |   |__ Else
|   |   |   |
|   |   |   |__ Return 0 (Not a palindrome)
|   |   |
|   |
|   |__ Else
|   |   |
|   |   |__ If A[i] is not alphanumeric
|   |   |   |
|   |   |   |__ Increment i by 1
|   |   |
|   |   |__ If A[j] is not alphanumeric
|   |   |   |
|   |   |   |__ Decrement j by 1
|   |   |
|
|__ Return 1 (Palindrome)
|
End

```
## Time Complexity
The time complexity of this solution is O(N), where N is the length of the input string A. This is because we iterate through the string once from both ends, comparing alphanumeric characters.

## Space Complexity
The space complexity of this solution is O(1) because it uses a constant amount of extra space to store the indices i and j and does not rely on additional data structures based on the input size.

## Here are some additional coding questions related to the "Palindrome String" problem:

1. [Valid Palindrome II](https://leetcode.com/problems/valid-palindrome-ii/) : Given a non-empty string s, you may delete at most one character. Judge whether you can make it a palindrome.
