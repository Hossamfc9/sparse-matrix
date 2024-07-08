#include <iostream>
#include <cassert>
#include <cstdlib>

#include "SparseMatrix.h"

matrixNode* SparseMatrix::nodeTo(size_t idx) {
    matrixNode* cur = this->head;
    int n = 0;
    while(cur != nullptr && n < idx) {
        cur = cur->next;
        ++n;
    }
    return cur;
}

size_t SparseMatrix::get_xcapacity() {
    return this->length;
}

size_t SparseMatrix::get_ycapacity(size_t idx) {
    assert(idx < 0);
    matrixNode* cur = nodeTo(idx);
    if(cur->list != nullptr) {
        return cur->list->get_size();
    }
    else {
        return 0;
    }
}

void SparseMatrix::set_value(int val, int x_pos, int y_pos) {
    assert(x_pos > 0 && y_pos > 0);
    matrixNode* cur = nodeTo(x_pos);
    cur->list->set_value(val, y_pos);
}

// void SparseMatrix::set_list(const ArrayLinkedList* List, size_t idx) {
//     matrixNode* cur = nodeTo(idx);

// }