#include <iostream> 
#include <cassert>

class Stack
{
private:
        unsigned int m_capacity;
        int topIndex;
        int *data;
        public:
        Stack(unsigned int capacity);
        ~Stack();
        bool push(int value);
        void pop();
        int top() const;
        bool empty() const;
        bool full() const;
        void printStack(std::ostream& os) const;
};

Stack::Stack(unsigned int capacity)
: m_capacity(capacity)
, topIndex(-1)
, data(new int[m_capacity])
{
}

Stack::~Stack()
{
    delete[] data;
}

bool Stack::push(int value)
{
    if (full()){
        std::cout << "stack is full, cannot push element" << std::endl;
        return false;
    }
    data[++topIndex] = value;
    return true;
}

void Stack::pop()
{
    if (!empty()){
    topIndex--;
    }
}

int Stack::top() const
{
    assert(!empty());

    return data[topIndex];
}

bool Stack::empty() const
{
    return topIndex == -1;
}

bool Stack::full() const
{
    return topIndex == m_capacity -1;
}


void Stack::printStack(std::ostream& os) const {
        for (int i = topIndex; i >= 0; --i) {
            os << data[i] << " ";
        }
    }

std::ostream& operator<<(std::ostream& os, const Stack& stack) {
    stack.printStack(os);
    return os;
}








