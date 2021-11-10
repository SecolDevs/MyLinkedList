//
// Created by Sebastian on 11/10/2021.
//

#include "LinkedList.h"

template<class T>
LinkedList<T>::LinkedList() {
    head = NULL;
}

template<class T>
bool LinkedList<T>::isEmpty() {
    return head == NULL;
}

template<class T>
void LinkedList<T>::prepend(T value) {
    Node<T> *newNode = new Node<T>(value);
    if (!isEmpty()) newNode->next = head;
    head = newNode;
}

template<class T>
void LinkedList<T>::append(T value) {
    Node<T> *newNode = new Node<T>(value);
    if (isEmpty()) head = newNode;
    else {
        Node<T> *aux = head;
        while (aux->next != NULL) {
            aux = aux->next;
        }
        aux->next = newNode;
    }
}

template<class T>
void LinkedList<T>::insertBeforeTo(T value, std::string id) {

}

template<class T>
void LinkedList<T>::insertAfterTo(T value, std::string id) {

}

template<class T>
bool LinkedList<T>::lookUp(std::string id) {
    return false;
}

template<class T>
Node<T> *LinkedList<T>::search(std::string id) {
    return Node<T>(T());
}

template<class T>
std::vector<T> LinkedList<T>::getLinkedList() {
    std::vector<T> outVector;
    Node<T> *aux = head;
    while (aux != NULL) {
        outVector.push_back(aux->value);
        aux = aux->next;
    }
    return outVector;
}

template<class T>
LinkedList<T>::~LinkedList() {

}
