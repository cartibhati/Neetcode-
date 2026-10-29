# Two Pointers - Concepts & Hints

This document serves as a quick revision guide for the core concepts and techniques used in each problem of the **Two Pointers** category.

### 1. Valid Palindrome
- **Concept**: Two Pointers (Inward Convergence)
- **Hint**: Use two pointers starting at opposite ends of the string (`i = 0`, `j = n - 1`). Move the pointers inward, skipping non-alphanumeric characters using `isalnum()`. Compare characters in a case-insensitive manner with `tolower()`. If at any point the characters don't match, return `false`. If the pointers meet or cross without mismatch, return `true`.

### 2. Two Sum II (Input Array Is Sorted)
- **Concept**: Two Pointers (Converging from both ends)
- **Hint**: Since the array is **sorted**, place one pointer at the start (`i = 0`) and one at the end (`j = n - 1`). Check the sum of `nums[i] + nums[j]`. If it equals the target, return `{i+1, j+1}` (1-indexed). If the sum is too large, decrement `j`. If too small, increment `i`. The sorted property guarantees a solution exists.

### 3. Container With Most Water
- **Concept**: Two Pointers (Greedy, Converging from both ends)
- **Hint**: Place one pointer at each end of the `height` array (`i = 0`, `j = n - 1`). The area is `min(height[i], height[j]) * (j - i)`. Always move the pointer pointing to the **shorter** line inward — keeping the taller line is the only chance to find a larger area. Track the maximum area seen so far and return it when the pointers meet.

### 4. Trapping Rain Water
- **Concept**: Two Pointers with Running Max
- **Hint**: Use `left` and `right` pointers at both ends, tracking `max_left` and `max_right` as the running maximums seen so far. At each step, process the side with the **smaller current height** — the water it can trap is `max_left - height[left]` (or `max_right - height[right]`). This works because the shorter side is the bottleneck: the opposite side is guaranteed to be at least as tall. Move the processed pointer inward and accumulate the water.

### 5. 3Sum
- **Concept**: Sort + Fix One + Two Pointers
- **Hint**: Sort the array first. Fix the first element with index `i` (skip duplicates using `if (i > 0 && nums[i] == nums[i-1]) continue`). Then run a two-pointer search on the subarray to the right: if `nums[i] + nums[left] + nums[right] == 0`, record the triplet, advance both pointers, and skip duplicates on both sides. If the sum is too small, increment `left`; if too large, decrement `right`.

