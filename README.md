# CPP_Ordered_Data_Structures
Topics: 
  1. Array
  2. Linked List (double and single)
  3. Queue
  4. Stack
  5. Binary Search Tree
  6. B-Tree
  7. Heap Tree

Array
- Elements must be of the same type (ex: integer array must only contain integers)
- Can calculate the offset (distance between objects in the array) to any given index from the start of the array

    Array Limitation
    - Fixed capacity and size of array is current number of elements stored in array
    - Stores data sequentially in memory
    - Only way to add another element is to allocate a larger array and copy over the data
    - Std::vector implements an array that dynamically grow in size automatically while the array properties remain true.
  ![image](https://github.com/zangelchen/CPP_Ordered_Data_Structures/assets/117549284/12d3c995-f20a-4230-ae51-35c6d0e21763)


Linked List
- Node = pair of both the data and link
- head pointer stores the link to the beginning of the list
- Nullptr marks the end of the list
- The time it takes to access a given index grows based on the size of the list
- Flexible alternative to an array 

![image](https://github.com/zangelchen/CPP_Ordered_Data_Structures/assets/117549284/addb3cc1-4e7c-4855-b810-133778d74b01)

Array and Linked List Big(O) Notations: 
<img width="679" alt="image" src="https://github.com/zangelchen/CPP_Ordered_Data_Structures/assets/117549284/a1083570-65c2-4ed5-a94a-6b2cc97ae4c8">

Queue (Data Structure) 
- First in first out (like waiting in line)
- Queue ADT
    1. create : Creates an empty queue
    2. push : Adds data to the back of the queue
    3. pop : Removes data from the front of the queue empty è Returns true if the queue is empty
    4. empty : Returns true if the queue is empty
- Can be implemented with an array or a doubly linked list
![image](https://github.com/zangelchen/CPP_Ordered_Data_Structures/assets/117549284/e9193c69-04d5-4c44-a082-857e90b74d1d)

Stack (Data Structure)
- Last in First out (like a pile of papers)
- Stack ADT
    1. create : Creates an empty stack
    2. push : Adds data to the top of the stack
    3. pop : Removes data from the top of the stack
    4. empty : Returns true if the stack is empty
- Can be implemented with an array or linked list
![image](https://github.com/zangelchen/CPP_Ordered_Data_Structures/assets/117549284/f1baf7ca-3924-4a6f-a10b-bbcd3b6ca222)

Tree (Data Structure) 
- Must be rooted, directed, and acyclic
- relationship between nodes follow classical ancestry terms
- Property
    1. The height of a binary tree is the number of edges in the longest path from the root to a leaf.
    2. A binary tree is full if and only if every node has either zero children or two children.
    3. A binary tree is perfect if and only if all interior nodes have two children and leaves are at the same level.
    4. A binary tree is complete if and only if the tree is perfect up until the last level and all leaf nodes on the last level are pushed to the left.
![image](https://github.com/zangelchen/CPP_Ordered_Data_Structures/assets/117549284/21d8cc1e-96b6-4749-a465-504fc058c6f4)

Binary Search Tree
- BST is an ordered binary tree capable of being used as a search structure
- Nodes in the left subtree are less than itself
- Nodes in the right subtree are greater than itself.
- BST-Based Dictionary ADT
    1. find : Finds the data associated with a key in the dictionary
    2. insert : Adds a key/data pair to the dictionary
    3. remove : Removes a key from the dictionary
    4. empty Returns true if the dictionary is empty
![image](https://github.com/zangelchen/CPP_Ordered_Data_Structures/assets/117549284/851b31a2-10d7-45b8-95fc-ac283475f610)

In-Order Predecessor (IOP)
- The in-order predecessor is the previous node in an in-order traversal of a BST
- The IOP of a node will always be the right-most node in the node’s left sub-tree (aka the largest number that's smaller than the root removed)
- BST::remove
    1. Zero children: Simple, delete the node.
    2. One child: Simple, works like a linked list.
    3. Two children: Find the IOP of the node to be removed.Swap with the IOP. Remove the node in it’s new position.
- BST Analysis
    1. There are n! different ways to create BSTs with the same data.
    2. The worst-case BST will have a height proportional to the number of nodes.
    3. An average BST will have a height proportional to the logarithm of the number of nodes.
    4. Using a height balance factor, we can formalize if a given BST is balanced.

BST Rotations (https://zhangruochi.com/AVL-Tree/2019/09/15/)
- BST rotations restore the balance property to a tree after an insert causes a BST to be out of balance.
- Four possible rotations: L, R, LR, RL (Rotations run in O(1) time)
![image](https://github.com/zangelchen/CPP_Ordered_Data_Structures/assets/117549284/e9bc4df2-301b-4116-89d7-ad04a2617c1a)

B-Tree

HEAP (minHEAP)
- tree shaped data, minHeap is every children is greater than the parent
- can traverse the tree to locate the desired node
- heapify up: insert a new element to a heap at he bottom of the three, and move up the tree while comparing and swapping until new element is in the proper level
- heapify down: remove the top element from a heap (done by swapping the top element with the last element at the bottom and removing the last element) then move from top down to keep the heap property

![image](https://github.com/zangelchen/CPP_Ordered_Data_Structures/assets/117549284/cf008328-1ac6-459a-9f10-5c82e4818fe0)





