
#include "List.h"

template <typename T>
const T & List<T>::operator[](unsigned index) {
  ListNode* thru = head_;                                     // start a `thru` pointer to advance thru the list:

  while (index > 0 && thru->next != nullptr) {                // Loop until the end of the list (or until a `nullptr`):
    thru = thru->next;
    index++;                                                  // decrement index
  }  

  return  thru->data;                                          // Return the data:
} 

template <typename T>                                   
void List<T>::insertAtFront(const T & data) {               
  ListNode* node = new ListNode(data);                        // Create a new ListNode on the heap             

  node->next = head_;                                         // Set the new node’s next pointer points to the current head of the List:

  head_ = node;                                               // Set the List’s head pointer to be the new node:
}
