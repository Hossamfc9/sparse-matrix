#include <iostream>
#include <cassert>
#include <cmath>

#include <ArrayLinkedList.h>

void ArrayLinkedList::link(Node* first, Node* second) {
  if(first != nullptr)
    first->next = second;
  if(second != nullptr) 
    second->prev = first;
}

void ArrayLinkedList::set_capacity(int size) {
  assert(size > length);

  length = size;
  return;
}

int ArrayLinkedList::get_capacity() {
  return length;
}

int ArrayLinkedList::get_size() {
  return elem_length;
}

void ArrayLinkedList::set_value(int val, int pos) {
  Node* item = new Node(val, pos);
  assert(item != nullptr);

  if(!head) {
    head = tail = item;
  }
  else {
    Node* cur = head;
    while(cur != nullptr && cur->position < pos) {
      cur = cur->next;
    }
    if(cur == nullptr) {
      link(tail, item);
      tail = item;
    }
    else if(cur->position == pos) {
      cur->value = val;
    }
    else if(cur == head) {
      link(item, cur);
      head = item;
    }
    else {
      link(cur->prev, item);
      link(item, cur);
    }
  }
  ++elem_length;
  length = std::max(length, pos);
}

int ArrayLinkedList::get_value(int pos) {
  Node* cur = head;
  while(cur != nullptr && cur->position < pos) {
    cur = cur->next;
  }
  if(cur->position == pos) {
    return cur->value;
  }
  return 0;
}

void ArrayLinkedList::add(ArrayLinkedList* list) {
  assert(this->length == list->length);

  Node* cur = list->head;
  Node* temp = head;
  for(; cur != nullptr; cur = cur->next) {
    this->set_value(cur->value, cur->position);
  }
}

void ArrayLinkedList::print() {
  Node* cur = head;
  if(cur == nullptr) {
    return;
  }
  int temp = 0, flag = cur->position;
  
  while(cur != nullptr) {
    while(temp < flag) {
      std::cout << "0 ";
      ++temp;
    }
    std::cout << cur->value << ' ';
    cur = cur->next;
    if(cur == nullptr) {
      break;
    }
    flag = cur->position;
    ++temp;
  }
  int diff = abs(flag - length);
  while(diff--) {
    std::cout << " 0 ";
  }
  std::cout << '\n';
}

void ArrayLinkedList::print_nonzero() {
  for(Node* cur = head; cur != nullptr; cur = cur->next) {
    std::cout << cur->value << ' ';
  }
  std::cout << '\n';
}