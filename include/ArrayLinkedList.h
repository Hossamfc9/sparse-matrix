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

  int elem_length;
  int length;
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

  void set_capacity(int);

  int get_capacity();

  int get_size();

  // inserts to linked list according to position
  void set_value(int, int);

  void add(const ArrayLinkedList*);

  int get_value(int);

  void print();

  void print_nonzero();
};
