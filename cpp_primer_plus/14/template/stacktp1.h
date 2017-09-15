#ifndef STACKTP1_H_
#define STACKTP1_H_

template <class T>
class Stack {

private:
    enum {SIZE = 10};
    int size;
    int top;
    T* items;

public:
    explicit Stack(int = SIZE);
    Stack(const Stack&);
    ~Stack() {delete [] items;}

    bool isempty() {return top == 0;}
    bool isfull() {return top == size;}
    int getSize();
    int capacity();
    bool push(const T&);
    bool pop(T&);
    Stack& operator=(const Stack&);  // assignment(abbr.)
};

template<class T>
Stack<T>::Stack(int s) : size(s), top(0) {
    items = new T[size];
}

template<class T>
Stack<T>::Stack(const Stack& st) {
    size = st.size;
    top = st.top;

    // delete [] items;
    items = new T[size];
    for (int i = 0; i < top; ++i) {
        items[i] = st.items[i];
    }
}


template<class T>
int Stack<T>::getSize() {
    return top;
}

template<class T>
int Stack<T>::capacity() {
    return size;
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

template<class T>
Stack<T>& Stack<T>::operator=(const Stack<T>& st) {
    if (this == &st) {
        return *this;
    }

    delete [] items;
    size = st.size;
    top = st.top;
    items = new T[size];

    for (int i = 0; i < size; ++i) {
        items[i] = st.items[i];
    }

    return *this;
}

#endif
