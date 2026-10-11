# Two Pointers - Concepts & Hints

This document serves as a quick revision guide for the core concepts and techniques used in each problem of the **Two Pointers** category.

### 1. Valid Palindrome
- **Concept**: Two Pointers (Inward Convergence)
- **Hint**: Use two pointers starting at opposite ends of the string (`i = 0`, `j = n - 1`). Move the pointers inward, skipping non-alphanumeric characters using `isalnum()`. Compare characters in a case-insensitive manner with `tolower()`. If at any point the characters don't match, return `false`. If the pointers meet or cross without mismatch, return `true`.
