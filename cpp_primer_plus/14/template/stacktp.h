#ifndef STACKTP_H_
#define STACKTP_H_

template <class T>
class Stack {
private:
    enum {MAX = 10};
    T items[MAX];
    int top;

public:
    Stack();
    bool isempty();
    bool isfull();
    int size();
    int capacity();
    bool push(const T&);
    bool pop(T&);
};

template<class T>
Stack<T>::Stack() {
    top = 0;
}

template<class T>
bool Stack<T>::isempty() {
    return top == 0;
}

template<class T>
bool Stack<T>::isfull() {
    return top == MAX;
}

template<class T>
int Stack<T>::size() {
    return top;
}

template<class T>
int Stack<T>::capacity() {
    return MAX;
}

template<class T>
bool Stack<T>::push(const T& e) {
    if (isfull()) {
        return false;
    }

    items[top++] = e;
    return true;
}

template<class T>
bool Stack<T>::pop(T& e) {
    if (isempty()) {
        return false;
    }

    e = items[--top];
    return true;
}

#endif
