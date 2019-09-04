// Wrong:
//include <iostream>
// Right:
#include <iostream>
int main() {
  std::cout << "Hello Buggy World \n";
  // We don't need to do either of these because the output
  //  is automatically flushed at the end of the file
  std::cout << std::endl;
  std::cout.flush();
  return 0;
}
