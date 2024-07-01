#include "ArrayLinkedList.h"

struct  matrixNode {
    Node* head;
    matrixNode* next;
};

class SparseMatrix : public ArrayLinkedList {
private:
    matrixNode* head;
    matrixNode* tail;

    int mat_length;

    // number of linked lists opened using set.
    int length;
public:
    SparseMatrix(int x, int y) : mat_length(x), length(y) {}
    SparseMatrix() {
        this->head = nullptr;
        this->tail = nullptr; 
    }

    SparseMatrix(const SparseMatrix&) = delete;
    SparseMatrix &operator=(const SparseMatrix&) = delete;

    int get_xcapacity();

    int get_ycapacity();

    void set_value(int, int, int);

    void set_list(const ArrayLinkedList*);

    void add(const SparseMatrix*);

};