#ifndef STACK_H
#define STACK_H

#include <vector>
#include <stdexcept> 

template <typename T>
class stack {
private:
    std::vector<T> data;

public:
    void push(const T& value);
    void pop();
    T top() const;
    bool empty() const;
    size_t size() const;
    ~stack();
};

#include "stack.cpp"
#endif // STACK_H
