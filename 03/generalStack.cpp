#include "generalStack.hpp"
#include <iostream> 
#include <stdexcept>

int main() {
    Stack<char>stack1(5);
    Stack<int>stack2(3);

    stack1.push('a');
    stack1.push('b');
    stack1.push('c');
    stack1.push('d');
    stack1.push('3');
    stack1.push('f');

    stack2.push(10);
    stack2.push(20);
    stack2.push(30);
    stack2.push(40);

    stack2.full();
    stack2.empty();
    char top1 = stack1.top();
    int top2 = stack2.top();

    std::cout << "topStack 1: " << top1 << std::endl;
    std::cout << "topStack 2: " << top2 << std::endl;
    std::cout << "Stack contents: " << stack2 << std::endl;
    std::cout << "Stack contents: " << stack1 << std::endl;
    return 0;
}