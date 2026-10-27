# Binary Search - Concepts & Hints

This document serves as a quick revision guide for the core concepts and techniques used in each problem of the **Binary Search** category.

### 1. Binary Search
- **Concept**: Binary Search (Divide and Conquer on a sorted array)
- **Hint**: Maintain two pointers `s = 0` and `e = n - 1`. In each iteration, compute `mid = s + (e - s) / 2` (avoids integer overflow). If `nums[mid] == target`, return `mid`. If `nums[mid] > target`, the answer is in the left half — set `e = mid - 1`. Otherwise, the answer is in the right half — set `s = mid + 1`. Return `-1` if the pointers cross without finding the target.

### 2. Search a 2D Matrix
- **Concept**: Binary Search (Treat the 2D matrix as a flattened sorted array)
- **Hint**: The matrix rows are sorted and each row starts greater than the last, so all `m * n` elements form one sorted sequence. Run a single binary search with `s = 0` and `e = m * n - 1`. Map any flat index `mid` back to 2D with `row = mid / n` and `col = mid % n`, then compare `matrix[row][col]` against the target exactly as in standard binary search.

