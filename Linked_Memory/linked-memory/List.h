
#pragma once

template <typename T>
class List {
  private:
    class ListNode {                                              //creating a listnode
      public:
        const T & data;                                           // stating the data in the node
        ListNode* next;                                           // next pointer to link to the next node
        ListNode(const T & data) : data(data), next(nullptr) { }  // put it all together, ListNode CONSTRUCTOR that takes in data and next to null for the end
    };

    ListNode* head_;                                               // Head pointer for our List to start it off
    
  public:
    const T & operator[](unsigned index);                       // &operator[] is c++ syntax that we can access a List L and L[0] will call the index function (locates the first occurence of L)
    void insertAtFront(const T & data);                         // someway to insert the element into the list

    List() : head_(nullptr) { }                                 // We define this constructor to make sure that head_ is null-initialized.

    ~List() {                                                   // We define a destructor to delete the memory allocated for the ListNode objects when the List is destroyed.
    }

};

#include "List.cpp"
