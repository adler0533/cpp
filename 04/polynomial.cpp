#include "polynomial.hpp"
#include <vector>

int main() {
    Polynomial<int> p1(2);
    p1.setCoefficient(2, 1);
    p1.setCoefficient(1, 2);
    p1.setCoefficient(0, 1);
    
    p1.print();

    return 0;
}