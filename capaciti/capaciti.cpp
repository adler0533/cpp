#include <iostream>

class Stack {
private:
    int* data;
    int capacity;
    int topIndex;

public:
    // Constructor
    Stack(int size) : capacity(size), topIndex(-1) {
        data = new int[capacity];
    }

    // Destructor
    ~Stack() {
        delete[] data;
    }

    // Function to push an element onto the stack
    void push(int value) {
        if (topIndex < capacity - 1) {
            data[++topIndex] = value;
        } else {
            std::cout << "Stack overflow: Cannot push onto a full stack." << std::endl;
        }
    }

    // Function to pop an element from the stack
    void pop() {
        if (!empty()) {
            --topIndex;
        } else {
            std::cout << "Stack underflow: Cannot pop from an empty stack." << std::endl;
        }
    }

    // Function to get the top element of the stack
    int top() const {
        if (!empty()) {
            return data[topIndex];
        } else {
            std::cerr << "Error: Stack is empty." << std::endl;
            exit(EXIT_FAILURE);
        }
    }

    // Function to check if the stack is empty
    bool empty() const {
        return topIndex == -1;
    }
};

int main() {
    // Example usage of the stack
    Stack myStack(100); // Adjust the capacity as needed

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    std::cout << "Top element: " << myStack.top() << std::endl;

    myStack.pop();
    std::cout << "Top element after pop: " << myStack.top() << std::endl;

    return 0;
}
