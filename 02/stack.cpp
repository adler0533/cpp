#include "stack.hpp"
#include <iostream> 
#include <stdexcept>

int main() {
    // Example usage
    Stack stack1(5);
    Stack stack2(3);

    stack1.push(10);
    stack1.push(12);
    stack1.push(13);
    stack1.push(14);
    stack1.push(15);
    stack1.push(16);

    stack2.push(10);
    stack2.push(20);
    stack2.push(30);
    stack2.push(40);

    stack2.full();
    stack2.empty();
    int top2 = stack2.top();

    std::cout << "topStack 2: " << top2 << std::endl;
    std::cout << "Stack contents: " << stack2 << std::endl;
    std::cout << "Stack contents: " << stack1 << std::endl;
    return 0;
}