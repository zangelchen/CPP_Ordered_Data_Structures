STACK:
- Last in first out data structure (imagine a stack of papers)
- can be implemented in an array or a doubly linked list (both can be run in a constant O(1) run time)
- can be implemented in an array or a doubly linked list (both can be run in a constant O(1) run time)


STACK ADT 
(Abstract Data Type = how data interacts with the structure)

create - create empty stack
push   - adds data to the top of the stack
pop    - removes data from the top of the stack
empty  - returns true if the stack is empty 


TYPE 1: ARRAY BASED STACK
beginning - [0][1][2]

push(2); [2]
push(1); [1][2]
push(0); [0][1][2]
pop();-> returns 0
push(3); -> [3][1][2]

Run time: O(1) -> Just keep adding, if need to insert more, then double the array

TYPE 2: LIST BASED QUEUE - DOUBLY LINKED LIST

head_ -> [][] -> [][] -> [][] -> [][] -> tail_ -> 0

Just add to the beginning of the list and reassign the head_ pointer

Run time: O(1)




