# Stacks

## Definition
- **Stack**: A linear data structure that follows **LIFO** (Last In, First Out) principle.

## Operations
1. **Push**: Add an element to the top of the stack.
2. **Pop**: Remove the top element of the stack.
3. **Peek**: Get the top element without removing it.

## Custom Implementation
### Using Array
1. Initialize an empty array and a `top` variable as `-1`.
2. For **push**:
   - Increment `top`.
   - Add the element at `array[top]`.
3. For **pop**:
   - Check if the stack is empty (top == -1).
   - If not, retrieve and decrement `top`.

### Using Singly Linked List
1. Define a `Node` structure with:
   - Data
   - Pointer to the next node.
2. Maintain a pointer to the `top` node.
3. For **push**:
   - Create a new node.
   - Point it to the current `top`.
   - Update `top`.
4. For **pop**:
   - Check if the stack is empty (top == NULL).
   - Retrieve data from `top`.
   - Move `top` to the next node.