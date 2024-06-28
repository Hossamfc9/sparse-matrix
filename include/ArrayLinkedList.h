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

  void link(Node*, Node*);

public:
  ArrayLinkedList() {
    this->head = nullptr;
    this->tail = nullptr;
  }

  ArrayLinkedList(const ArrayLinkedList&) = delete;
  ArrayLinkedList &operator=(const ArrayLinkedList& temp) = delete;

  // inserts to linked list according to position
  void set_value(int, int);

  void add(ArrayLinkedList*);

  int get_value(int);

  void print();

  void print_nonzero();
};
