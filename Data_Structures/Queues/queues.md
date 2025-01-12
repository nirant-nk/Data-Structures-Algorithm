# Queues

## Definition
- **Queue**: A linear data structure that follows **FIFO** (First In, First Out) principle.

## Operations
1. **Enqueue**: Add an element to the rear of the queue.
2. **Dequeue**: Remove the element from the front of the queue.
3. **Peek**: Get the front element without removing it.

## Custom Implementation
### Using Array
1. Maintain:
   - An array.
   - Two pointers: `front` and `rear`.
2. For **enqueue**:
   - Check if the queue is full.
   - If not, increment `rear` and add the element.
3. For **dequeue**:
   - Check if the queue is empty (`front > rear`).
   - If not, retrieve the element at `front` and increment `front`.

### Using Singly Linked List
1. Define a `Node` structure with:
   - Data
   - Pointer to the next node.
2. Maintain:
   - A pointer to the `front` node.
   - A pointer to the `rear` node.
3. For **enqueue**:
   - Create a new node.
   - Point `rear->next` to the new node.
   - Update `rear`.
4. For **dequeue**:
   - Check if the queue is empty (`front == NULL`).
   - Retrieve data from `front`.
   - Move `front` to the next node.
