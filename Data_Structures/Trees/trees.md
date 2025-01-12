# Trees

## Binary Trees
- **Definition**: A tree where each node has at most two children (left and right).
- **Properties**:
  - Root: The topmost node.
  - Leaf: A node with no children.
  - Height: The longest path from root to a leaf.

## Tree Terminologies
- **Parent**: A node connected to its child.
- **Child**: A node connected to its parent.
- **Sibling**: Nodes with the same parent.
- **Subtree**: A tree formed by a node and its descendants.

## Depth-First Search (DFS)
### Types
1. **Pre-order (Root → Left → Right)**
2. **In-order (Left → Root → Right)**
3. **Post-order (Left → Right → Root)**

### Algorithm Using Custom Stack
1. Initialize an empty stack.
2. Push the root node onto the stack.
3. While the stack is not empty:
   - Pop the top node.
   - Process the node (visit for pre-order).
   - Push its right child (if any).
   - Push its left child (if any).

## Breadth-First Search (BFS)
### Level Order Traversal Using Custom Queue
1. Initialize an empty queue.
2. Enqueue the root node.
3. While the queue is not empty:
   - Dequeue a node.
   - Process the node (visit).
   - Enqueue its left and right children (if any).

---

## **Example Tree:**
```
        1
       / \
      2   3
     / \   \
    4   5   6
```

### Traversal Outputs:
- **Pre-order:** 1, 2, 4, 5, 3, 6
- **In-order:** 4, 2, 5, 1, 3, 6
- **Post-order:** 4, 5, 2, 6, 3, 1
- **Level Order:** 1, 2, 3, 4, 5, 6