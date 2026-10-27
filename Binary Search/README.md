# Binary Search - Concepts & Hints

This document serves as a quick revision guide for the core concepts and techniques used in each problem of the **Binary Search** category.

### 1. Binary Search
- **Concept**: Binary Search (Divide and Conquer on a sorted array)
- **Hint**: Maintain two pointers `s = 0` and `e = n - 1`. In each iteration, compute `mid = s + (e - s) / 2` (avoids integer overflow). If `nums[mid] == target`, return `mid`. If `nums[mid] > target`, the answer is in the left half — set `e = mid - 1`. Otherwise, the answer is in the right half — set `s = mid + 1`. Return `-1` if the pointers cross without finding the target.
