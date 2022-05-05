#include "IteratorLI.h"
#include "LI.h"
#include <exception>

IteratorLI::IteratorLI(const LI& li) : lista(li) {
    /* de adaugat */
    this->index = lista.head;
}

void IteratorLI::prim() {
    /* de adaugat */
    this->index = this->lista.head;
}

void IteratorLI::urmator() {
    /* de adaugat */
    if (!valid()) {
        throw std::exception("iterator invalid!\n");
    }
    else {
        this->index++;
    }
}

bool IteratorLI::valid() const {
    /* de adaugat */
    if (this->index < 0) return false;
    else return true;
}

TElem IteratorLI::element() const {
    /* de adaugat */
    if (!valid()) {
        throw std::exception("iterator invalid!\n");
    } else return this->lista.elems[this->index];
}
