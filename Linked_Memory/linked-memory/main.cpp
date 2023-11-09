#include "List.h"
#include <iostream>

/*
Linked Memory
- stores data together with a link to the location (in memory) of the next list node

List Node - store both the data and the link
            [data][link] -> [data][link]

            ListNode Class Format:

                template <typename T>
                class ListNode {
                  public:
                    const T & data;                                     // data piece of the linknode
                    ListNote *next;                                     // next pointer of the linknode for the next element on the list
                    ListNode(T & data): data(data), next(NULL) {}
                }

Linked List - zero or more ListNote elements forms a linked list

              a head pointer stores the link to the beginning of the list
              a pointer to nullptr marks the end of the list
        
              head_ -> data][link] -> [data][link] -> nullptr
                              0                1

To add items - just add it to the front of the list, whereas arrays had to be resized
Data type must be the same type throughout the list (array does as well)
*/

int main() {
  List<int> list;                                                     // data structure only accept integers

  const int item_a = 3;
  const int item_b = 30;

  std::cout << "Inserting element 3 at front..." << std::endl; 
  list.insertAtFront(item_a);                                         // insert element with data 3 at the front via a new node and the next pointervpoints to null
  std::cout << "list[0]: " << list[0] << std::endl;                   // list[0]: 3   | head_ -> [3] -> [nullptr]

  std::cout << "Inserting element 30 at front..." << std::endl; 
  list.insertAtFront(item_b);                                         // insert 30 at the front so list becomes 
  std::cout << "list[0]: " << list[0] << std::endl;                   // list[0]: 30  | head_ -> [30] -> [3] -> [nullptr]
  std::cout << "list[1]: " << list[1] << std::endl;                   // list[1]: 3   | head_ -> [30] -> [3] -> [nullptr]

  return 0;
}