# Linked List

## Definition
- A linear data structure where each element (node) contains:
  - **Data**: The value stored.
  - **Next**: A pointer/reference to the next node.

## Types of Linked Lists
1. **Singly Linked List**: Each node points to the next node.
2. **Doubly Linked List**: Each node points to both the next and previous nodes.
3. **Circular Linked List**: The last node points back to the first node.

## Insertion Algorithm
### At a Random Position
1. Create a new node.
2. Traverse to the position before the desired index.
3. Update pointers:
   - New node's `next` points to the current node at the position.
   - Previous node's `next` points to the new node.

## Deletion Algorithm
### At a Random Position
1. Traverse to the position before the desired index.
2. Update pointers:
   - Previous node's `next` points to the node after the current node.
3. Free the memory of the current node.
