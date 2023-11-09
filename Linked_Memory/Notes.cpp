
****************************************************** MAIN FILE *******************************************************************
int main() {
  List<int> list;                                                     // data structure only accept integers

  const int item_a = 3;                                               // variable item_a is 3...const means cannot be modified
  const int item_b = 30;                                              // variable item_b is 30...const means cannot be modified

  std::cout << "Inserting element 3 at front..." << std::endl;          
  list.insertAtFront(item_a);                                         // Part 1 STEP 1: GO TO HEADER FILE THEN CPP FILE -> insert into list with 3 at the front via a new node and the next pointer points to null
  std::cout << "list[0]: " << list[0] << std::endl;                   // list[0]: 3   | head_ -> [3] -> [nullptr]

  std::cout << "Inserting element 30 at front..." << std::endl; 
  list.insertAtFront(item_b);                                         // insert 30 at the front so list becomes 
  std::cout << "list[0]: " << list[0] << std::endl;                   // list[0]: 30  | head_ -> [30] -> [3] -> [nullptr]
  std::cout << "list[1]: " << list[1] << std::endl;                   // list[1]: 3   | head_ -> [30] -> [3] -> [nullptr]

  return 0;
}

****************************************************** HEADER FILE *******************************************************************

template <typename T>
class List {
  private:                                                             // CREATE A Linked List
    class ListNode {                                                   //creating a listnode
      public:
        const T& data;                                                 // states that the data is of type "constant T&" or constant reference to the object
        ListNode* next;                                                // create a next pointer where "next" is a prexisting function that points to the next node
        ListNode(const T& data) : data(data), next(nullptr) { }        // ListNode CONSTRUCTOR that takes in the data next pointer for a node
    };

    ListNode* head_;                                                   // Head pointer for our List to start it off
    
  public:
    const T & operator[](unsigned index);                              // &operator[] is c++ syntax that we can access a List L and L[0] will call the index function (locates the first occurence of L)
    void insertAtFront(const T & data);                                // someway to insert the element into the list

    List() : head_(nullptr) { }                                        // We define this constructor to make sure that head_ is null-initialized.

    ~List() {                                                          // We define a destructor to delete the memory allocated for the ListNode objects when the List is destroyed.
    } 

};

****************************************************** LIST.CPP FILE *******************************************************************

#include "List.cpp"

#include "List.h"

template <typename T>                                   
void List<T>::insertAtFront(const T & data) {                        
  ListNode* node = new ListNode(data);                         // PART 1 STEP 1/ PART 2 STEP 1: Create a new Node with value 3 on the heap / create a new node with 30             

  node->next = head_;                                          // Changing the head node step 1: making the new node "node" point the head node "head_"
 /* [30]    ->     [3]
  new node     head node */

  head_ = node;                                                // Changing the head node step 2: changing te head_node to point to the new node
 /* [30]    ->     [3]
  new node     
  head node */
}

template <typename T>                                          // PART 1 STEP 2/ PART 2 STEP 2:  Return the List Data 
const T & List<T>::operator[](unsigned index) {                // access the List and L[0] will call the index function to locate fhr first occurence of L
  ListNode* thru = head_;                                      // start a `thru` pointer to advance thru the list with it starting at head_

  while (index > 0 && thru->next != nullptr) {                 // Loop until the end of the list (or until a `nullptr`) where next references the next node to include the data
    thru = thru->next;
    index++;                                                   // repeat with the next index
  }  

  return  thru->data;                                          // Return the data:
} 

