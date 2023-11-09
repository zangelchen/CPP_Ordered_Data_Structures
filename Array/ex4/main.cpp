/**
 * Calculating the memory seperation of elements in a std::vector.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>
#include <vector>
#include "../Cube.h"

using uiuc::Cube;
/*
std:vector implements an array that dyamically grow in size automatically but all properties are like an array 
- array elememts are a fixed data type
- the array has a fixed capacity
- the array must be expanded when the capacity is reached */

int main() {
  std::vector<Cube> cubes{ Cube(11), Cube(42), Cube(400) };

  // Examine capacity:  
  std::cout << "Initial Capacity: " << cubes.capacity() << std::endl;         // Initial Capacity: 3      | .capacity....returns the size of storage space for array cubes
  cubes.push_back( Cube(800) );                                               //                          | push_back....adds 800 after Cube(400)
  std::cout << "Size after adding: " << cubes.size() << std::endl;            // Size after adding: 4     | .size........returns the number of components
  std::cout << "Capacity after adding: " << cubes.capacity() << std::endl;    // Capacity after adding: 6 | .capacity....returns the size of storage space for array cubes


  int offset = (long)&(cubes[2]) - (long)&(cubes[0]);                         // Memory separation: 16    | how much memory between Cube(400) and Cube(11)
  std::cout << "Memory separation: " << offset << std::endl;

  // Find a specific `target` cube in the array:
  Cube target = Cube(400);                                                    //                          | variable target is Cube(400)
  for (unsigned i = 0; i < cubes.size(); i++) {                       
    if (target == cubes[i]) {                                                 //                          | target (aka index of the array) = cube(0), cube(1), cube(2)
      std::cout << "Found target at [" << i << "]" << std::endl;              // Found target at [2]      | which cube[i] equals Cube(400)?
    } 
  }

  return 0;
}
