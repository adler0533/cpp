#include <iostream> 
#include <cassert>

template <typename T> class Stack
{
private:
        unsigned int m_capacity;
        int topIndex;
        T *data;
public:
        Stack(unsigned int capacity);
        ~Stack();
        bool push(T value);
        void pop();
        T top() const;
        bool empty() const;
        bool full() const;
        void printStack(std::ostream& os) const;
};

template <typename T>
Stack<T>::Stack(unsigned int capacity)
:m_capacity(capacity)
, topIndex(-1)
, data(new T[m_capacity])
{
}

template <typename T>
Stack<T>::~Stack()
{
    delete[] data;
}

template <typename T>
bool Stack<T>::push(T value)
{
    if (full()){
        std::cout << "stack is full, cannot push element" << std::endl;
        return false;
    }
    data[++topIndex] = value;
    return true;
}

template <typename T>
void Stack<T>::pop()
{
    if (!empty()){
    topIndex--;
    }
}

template <typename T>
T Stack<T>::top() const
{
    assert(!empty());

    return data[topIndex];
}

template <typename T>
bool Stack<T>::empty() const
{
    return topIndex == -1;
}

template <typename T>
bool Stack<T>::full() const
{
    return topIndex == m_capacity -1;
}

template <typename T>
void Stack<T>::printStack(std::ostream& os) const {
        for (int i = topIndex; i >= 0; --i) {
            os << data[i] << ",";
        }
    }

template <typename T>
std::ostream& operator<<(std::ostream& os, const Stack<T>& stack) {
    stack.printStack(os);
    return os;
}








