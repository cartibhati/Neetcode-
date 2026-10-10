# Stack - Concepts & Hints

This document serves as a quick revision guide for the core concepts and techniques used in each problem of the **Stack** category.

### 1. Valid Parentheses
- **Concept**: Stack for Matching Pairs
- **Hint**: Use a stack of characters. Push opening brackets `(`, `[`, `{` onto the stack. When encountering a closing bracket, check if the stack is non-empty and the top matches the corresponding opening bracket. Pop on match; if mismatch or stack empty, return false. Final stack must be empty.

### 2. Min Stack
- **Concept**: Stack with Auxiliary Tracking (Pair Stack)
- **Hint**: Store pairs of `{val, minVal}` in a single stack where `minVal` represents the minimum element in the stack up to that level (`min(val, current_min)`). This allows $O(1)$ time complexity for `getMin()`.

### 3. Evaluate Reverse Polish Notation
- **Concept**: Stack-based Postfix Expression Evaluation
- **Hint**: Iterate through tokens. If the token is a number, push it to the stack. If it is an operator (`+`, `-`, `*`, `/`), pop the top two numbers (second popped is left operand `a`, first popped is right operand `b`), apply `a op b`, and push the result back.

### 4. Daily Temperatures
- **Concept**: Monotonic Stack (Decreasing)
- **Hint**: Maintain a monotonic stack storing pairs of `{temperature, index}` in decreasing order. For each day, pop elements from the stack while the current temperature is greater than the stack top's temperature, recording the index difference (`i - stidx`) as the number of days to wait. Then push the current day onto the stack.

### 5. Car Fleet
- **Concept**: Sorting + Stack (Time to Destination)
- **Hint**: Pair position and speed for each car, then sort descending by starting position (closest to target first). Compute `time = (target - position) / speed` for each car. Iterate through cars; if the stack is empty or current `time > st.top()`, push `time` onto stack (starts a new fleet). Otherwise, the car catches up and joins the fleet ahead. The stack size gives total fleets.

