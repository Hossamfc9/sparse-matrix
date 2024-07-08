#include "ArrayLinkedList.h"
#include <cstdlib>

using namespace std;

struct  matrixNode {
    ArrayLinkedList* list;
    matrixNode* next;

    matrixNode() {
        list = nullptr;
        next = nullptr;
    }
};

class SparseMatrix : public ArrayLinkedList {
private:
    matrixNode* head;
    matrixNode* tail;

    int mat_length;

    // number of linked lists opened using set function.
    int length;

    matrixNode* nodeTo(size_t);
public:
    SparseMatrix(int x, int y) : mat_length(x), length(y) {}
    SparseMatrix() {
        this->head = nullptr;
        this->tail = nullptr; 
    }

    SparseMatrix(const SparseMatrix&) = delete;
    SparseMatrix &operator=(const SparseMatrix&) = delete;

    size_t get_xcapacity();

    size_t get_ycapacity(size_t);

    //   set_value(val, x-axis, y-axis);
    void set_value(int, int, int);

    void set_list(const ArrayLinkedList*, size_t);

    void add(const SparseMatrix*);

    void print();

    void print_nonzero();
};