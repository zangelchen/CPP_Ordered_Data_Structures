#include <iostream>
#include "../Cube.h"

using uiuc::Cube;

int main() {
  // Create an array of 3 `Cube`s:
  Cube cubes[3] = { Cube(11), Cube(42), Cube(400) };
  
  // Print the size of each type `Cube`:
  std::cout << sizeof(Cube) << std::endl;                         //Cub is 8 bytes large

  // Using pointer arithmetic, ask the computer to calculate
  // the offset from the beginning of the array to [2]:
  int offset = (long)&(cubes[2]) - (long)&(cubes[0]);             // expect 16 bytes
  std::cout << offset << std::endl;

  return 0;
}
