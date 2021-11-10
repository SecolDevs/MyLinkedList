//
// Created by Sebastian on 11/10/2021.
//

#ifndef TALLER_LINKEDLIST_H
#define TALLER_LINKEDLIST_H

#include <vector>
#include <string>
#include "Node.h"


template<class T>
class LinkedList {
public:

    LinkedList();

    bool isEmpty();

    void prepend(T);

    void append(T);

    void insertBeforeTo(T, std::string);

    void insertAfterTo(T, std::string);

    bool lookUp(std::string);

    Node<T> *search(std::string);

    std::vector<T> getLinkedList();

    virtual ~LinkedList();

private:
    Node<T> *head;

};

template<class T>
Node<T>::~Node() {

}


#endif //TALLER_LINKEDLIST_H
