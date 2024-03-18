#include "rational.hpp"
#include <iostream>
#include <stdexcept>

int main()
{
    Rational num1(3, 5);
    Rational num2(1, 3);
    num1.print();
    num2.print();
    Rational num3 = num1.mult(num2);
    Rational num4 = num1.add(num2);
    Rational num5 = num1.sub(num2);
    Rational num6 = num1.div(num2);

    num3.print();
    num4.print();
    num5.print();
    num6.print();

    return 0;
}
