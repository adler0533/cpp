#include <iostream> 

class Rational
{
public:    
        Rational (int myNumerator, int myDenominator);
        void print(); 
        Rational mult(Rational num);
        Rational add(Rational num);
        Rational sub(Rational num);
        Rational div(Rational num);
private:
        int numerator;  
        int denominator;

};

Rational::Rational(int myNumerator, int myDenominator)
{
    numerator = myNumerator;
    denominator = myDenominator;
}

void Rational::print()
{
    { std::cout << numerator << "/" << denominator << '\n'; }
}

Rational Rational::mult(Rational num)
{
    int a = numerator * num.numerator;
    int b = denominator * num.denominator;
    Rational newNum(a, b);
    return newNum;
}

Rational Rational::add(Rational num)
{   
    int a = (numerator * num.denominator) + (num.numerator * denominator);
    int b = (denominator * num.denominator);
    Rational newNum(a, b);
    return newNum;
}

Rational Rational::sub(Rational num)
{   
    int a = (numerator * num.denominator) - (num.numerator * denominator);
    int b = (denominator * num.denominator);
    Rational newNum(a, b);
    return newNum;
}

Rational Rational::div(Rational num)
{   
    int a = (numerator * num.denominator);
    int b = (denominator * num.numerator);
    Rational newNum(a, b);
    return newNum;
}
