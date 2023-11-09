/**
 * Simple use of std::queue.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>
#include <queue>

int main() {
  
  std::queue<std::string> q;                                // Create a std::queue:
                    
  q.push( "Orange" );                                       // Add several strings to the queue:      
  q.push( "Blue" );
  q.push( "Illinois" );

  std::cout << "First pop(): " << q.front() << std::endl;   // Print the front of the queue out and pop it off:
  q.pop();

  q.push( "Illini" );                                       // Add another string and then print ouf the front of the queue:
  std::cout << "Second pop(): " << q.front() << std::endl;

  return 0;
}