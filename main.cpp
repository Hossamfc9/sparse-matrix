#include <iostream>
#include "ArrayLinkedList.h"

int main() {
  ArrayLinkedList a, b;
  a.set_value(5, 1);
  a.set_value(9, 0);
  a.set_value(22, 4);
  a.print();
  std::cout << '\n';
  a.print_nonzero();
}
