#include <cstdlib>

struct Node {
  int value;
  int position;
  Node* next;
  Node* prev;

  Node(int val, int pos) : value(val), position(pos) {}
};

class ArrayLinkedList {
private:
  Node* head;
  Node* tail;

  size_t elem_length;
  size_t length;
  void link(Node*, Node*);

public:
  ArrayLinkedList(int size) : length(size) {
    this->head = nullptr;
    this->tail = nullptr;
    this->elem_length = 0;
  }
  ArrayLinkedList() {
    this->head = nullptr;
    this->tail = nullptr;
    this->length = 0;
    this->elem_length = 0;
  }

  ArrayLinkedList(const ArrayLinkedList&) = delete;
  ArrayLinkedList &operator=(const ArrayLinkedList&) = delete;

  void set_capacity(size_t);

  size_t get_capacity();

  size_t get_size();

  // inserts to linked list according to position
  void set_value(int, size_t);

  void add(const ArrayLinkedList*);

  int get_value(size_t);

  void print();

  void print_nonzero();
};
