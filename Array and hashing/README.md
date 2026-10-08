# Array and Hashing - Concepts & Hints

This document serves as a quick revision guide for the core concepts and techniques used in each problem of the **Array and Hashing** category.

### 1. Contains Duplicate
- **Concept**: Hash Set
- **Hint**: Insert elements into a Hash Set as you iterate. If you encounter an element that is already in the set, a duplicate exists. This gives an $O(N)$ time complexity.

### 2. Valid Anagram
- **Concept**: Frequency Counting (Hash Map or Array)
- **Hint**: Use an integer array of size 26 (for lowercase English letters) to count the frequencies of characters in both strings. Increment for the first string and decrement for the second. If all counts are zero, they are anagrams.

### 3. Two Sum
- **Concept**: Hash Map (1-Pass)
- **Hint**: As you iterate through the array, calculate the `required_number = target - current_element`. Check if this `required_number` exists in your Hash Map. If it does, you found the pair. If not, add the `current_element` and its index to the map.

### 4. Group Anagrams
- **Concept**: Hash Map with a Custom Key
- **Hint**: To group anagrams, you need a common key. You can either sort the string (which takes $O(K \log K)$ per string) and use the sorted string as the key, or use a character frequency count array as the key mapping to a list of strings.

### 5. Top K Frequent Elements
- **Concept**: Hash Map + Min-Heap (Priority Queue) / Bucket Sort
- **Hint**: First, count the frequencies using a Hash Map. Then, either use a Min-Heap of size $K$ to keep track of the top frequent elements (pops the least frequent), or use Bucket Sort where the index is the frequency and the value is a list of numbers.

### 6. Product of Array Except Self
- **Concept**: Prefix and Suffix Arrays
- **Hint**: To achieve $O(N)$ without division, precompute two arrays: one storing the product of all elements to the left of the current index (`prefix`), and one for the right (`suffix`). The result at any index $i$ is simply `prefix[i] * suffix[i]`.

### 7. Valid Sudoku
- **Concept**: Hash Sets
- **Hint**: Use hash sets to track seen numbers in rows, columns, and 3x3 sub-boxes. If a number is already in the set for the current row, column, or box, return false.

### 8. Longest Consecutive Sequence
- **Concept**: Hash Set
- **Hint**: Insert all numbers into a hash set for $O(1)$ lookups. Iterate through the set and find the start of a sequence (a number where `num - 1` is not in the set). Then, keep checking for `num + 1` to find the length of the consecutive sequence.
