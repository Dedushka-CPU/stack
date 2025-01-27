#include "stack.h"

template <typename T>
void stack<T>::push(const T& value) {
    data.push_back(value);
}

template <typename T>
void stack<T>::pop() {
    if (data.empty()) {
        throw std::out_of_range("Error. Cannot pop from an empty stack.");
    }
    data.pop_back();
}

template <typename T>
T stack<T>::top() const {
    if (data.empty()) {
        throw std::out_of_range("Error. Stack is empty.");
    }
    return data.back();
}

template <typename T>
bool stack<T>::empty() const {
    return data.empty();
}

template <typename T>
size_t stack<T>::size() const {
    return data.size();
}

template <typename T>
stack<T>::~stack() {}
