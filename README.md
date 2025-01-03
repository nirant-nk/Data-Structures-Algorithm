# Data Structure & Algorithms in C

## Repository Description
Welcome to the Data Structures and Algorithms in C repository! This repository serves as a practical resource for implementing fundamental data structures and algorithms in C. It is designed for students, developers, and anyone interested in enhancing their programming skills through hands-on coding.

## Key Features:
* Comprehensive Implementations: 
Includes essential data structures such as arrays, linked lists, stacks, queues, trees, and graphs.

* Algorithm Implementations: 
Covers fundamental algorithms including sorting (like quicksort and mergesort) and searching (linear and binary search).

* Concise Theoretical Explanations: 
Each implementation is accompanied by brief explanations of the data structure or algorithm, including its purpose, usage, and time complexity.

# File Structure for Reference

/Data-Structures-Algorithm
│
├── /Data_Structures
│   ├── /Strings
│   │   └── string_operations.c   # Searching and pattern matching functions
│   │   └── strings.md           # Overview of string operations and algorithms
│   ├── /Arrays
│   │   ├── arrays.c
│   │   └── arrays.md               # Overview of arrays, operations, and memory layout
│   ├── /Linked_Lists
│   │   ├── singly_linked_list.c
│   │   ├── doubly_linked_list.c
│   │   ├── circular_linked_list.c
│   │   └── linked_lists.md          # Overview of linked lists and their types
│   ├── /Stacks
│   │   ├── stack.c
│   │   └── stacks.md                # Overview of stacks, operations, and applications
│   ├── /Queues
│   │   ├── queue.cpp
│   │   ├── circular_queue.c
│   │   ├── priority_queue.c
│   │   └── queues.md                # Overview of queues and their types
│   ├── /Trees
│   │   ├── binary_tree.c
│   │   ├── binary_search_tree.c
│   │   ├── avl_tree.c
│   │   ├── red_black_tree.c
│   │   └── trees.md                 # Overview of tree structures and their properties 
│   └── /Graphs
│       ├── graph_adjacency_matrix.c
│       ├── graph_adjacency_list.c
│       └── graph_traversals.c
│       └── graphs.md            # Overview of graph representations and traversals 
│   
├── /Algorithms
│   ├── /Sorting_Algorithms
│   │   ├── bubble_sort.c
│   │   ├── selection_sort.c
│   │   ├── insertion_sort.c
│   │   ├── merge_sort.c
│   │   ├── quick_sort.c
│   │   └── sorting_algorithms.md     # Overview of sorting algorithms and their complexities 
│   ├── /Searching_Algorithms
│       ├── linear_search.c
│       └── binary_search.c
│       └── searching_algorithms.md    # Overview of searching algorithms and their complexities 
│   
├── /Recursion
│   ├── factorial.c
│   ├── fibonacci.c
│   └── tower_of_hanoi.c
│   └── recursion.md               # Overview of recursion concepts and examples 
│   
├── /Dynamic_Programming
│   ├── knapsack_problem.c
│   └── dynamic_programming.md     # Overview of dynamic programming concepts and examples 
│   
├── /Greedy_Methods
│   ├── prims_mst.c
│   ├── kruskals_mst.c
│   └── dijkstras_algorithm.c
│   └── greedy_methods.md          # Overview of greedy algorithms and their applications 
│   
├── /Backtracking
│   ├── n_queens_problem.c
│   └── backtracking.md             # Overview of backtracking techniques and examples 
└── README.md                           # Main entry point for the repository 

# MinGW setup
    1. Download 'MinGW Installer' from sourceforge.net run the application.
    2. Install All neccesary packages inside MinGW.
    3. Set Environment Variable PATH : DEFAULT = "C:\MinGW\bin"
    4. Test the installation using a terminal. Hit "gcc -v" / "g++ -v".
    5. Open VS Code
        - Either:
            use Extension - Code Runner (.run) 
        - OR: 
            run Manually
                -> gcc hello.c -o run
                -> ./run OR ./run.exe 

                OR

                -> gcc hello.c
                -> ./a OR ./a.exe
