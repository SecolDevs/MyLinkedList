//
// Created by Sebastian on 11/10/2021.
//

#ifndef TALLER_NODE_H
#define TALLER_NODE_H

#include <cstdlib>

template<class T>
class LinkedList;

template<class T>
class Node {
    friend class LinkedList<T>;

public:
    Node(T value) : value(value) {
        next = NULL;
    }

    virtual ~Node();

private:
    Node<T> *next;
    T value;
};


#endif //TALLER_NODE_H
