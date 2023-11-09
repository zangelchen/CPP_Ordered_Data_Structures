#include <iostream>

/*
OFFSET 
- how many array until the array you're looking for

ex) array of 3 (array is 8 bytes per space)

[cube] [cube] [cube] [cube]
   0     1      2      3

OFFSET of 3 =  8 bytes * 3 (from 0,1,2) */
int main() {
                                                      
  int values[10] = { 2, 3, 5, 7, 11, 13, 15, 17, 21, 23 };    // Create an array of 10 primes:
  
  std::cout << sizeof(int) << std::endl;                      // Print the size of each integer `int`:

  
  int offset = (long)&(values[2]) - (long)&(values[0]);       /* Pointer Arithmetic - calculate the offset from beginning of the array to [2]
                                                                 -> aka how much memory betweem index 2 and index 0
                                                                 -> memory address of integer at array [2] - memory address of integer at array [0]
                                                                 -> expect 8 bytes because index 2 = (3*4)bytes - 4 bytes = 8 bytes
                                                                 -> same as sum of index 0 and index 1 */
  std::cout << offset << std::endl;

  return 0;
}
