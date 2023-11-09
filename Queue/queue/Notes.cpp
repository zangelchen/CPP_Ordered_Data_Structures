QUEUE:
- first in first out data structure that mimics waiting in line 
- can be implemented in an array or a doubly linked list (both can be run in a constant O(1) run time)


QUEUE ADT 
(Abstract Data Type = how data interacts with the structure)

create - create empty queue
push   - adds data to the back of the queue
pop    - removes data from the front of the queue
empty  - returns true if the queue is empty 

TYPE 1: ARRAY BASED QUEUE
[0][1][2][3]

Run time: O(1) -> Just need to find the index to pop/push 


TYPE 2: LIST BASED QUEUE - DOUBLY LINKED LIST

head_ -> [][] -> [][] -> [][] -> [][] -> tail_ -> 0

Have two pointers of head_ (from beg to end) and tail_ (from end to beg)

If add to beginning of the list -> reference head_ 
If add to ending of the last -> reference tail_ 

Run time: O(1)
