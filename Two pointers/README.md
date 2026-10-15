# Two Pointers - Concepts & Hints

This document serves as a quick revision guide for the core concepts and techniques used in each problem of the **Two Pointers** category.

### 1. Valid Palindrome
- **Concept**: Two Pointers (Inward Convergence)
- **Hint**: Use two pointers starting at opposite ends of the string (`i = 0`, `j = n - 1`). Move the pointers inward, skipping non-alphanumeric characters using `isalnum()`. Compare characters in a case-insensitive manner with `tolower()`. If at any point the characters don't match, return `false`. If the pointers meet or cross without mismatch, return `true`.

### 2. Two Sum II (Input Array Is Sorted)
- **Concept**: Two Pointers (Converging from both ends)
- **Hint**: Since the array is **sorted**, place one pointer at the start (`i = 0`) and one at the end (`j = n - 1`). Check the sum of `nums[i] + nums[j]`. If it equals the target, return `{i+1, j+1}` (1-indexed). If the sum is too large, decrement `j`. If too small, increment `i`. The sorted property guarantees a solution exists.
