#include <iostream>
#include <vector>

template <typename T>
class Polynomial{
private:
    std::vector<T> coefficients;

public:
    Polynomial(unsigned int degree);
    void setCoefficient(unsigned int index, T value);
    T getCoefficient(unsigned int degree) const;
    unsigned int getDegree() const;
    Polynomial<T> operator+(const Polynomial<T>& other)const;
    Polynomial<T> operator-(const Polynomial<T>& other)const;
    Polynomial<T> operator*(const Polynomial<T>& other)const;
    T evaluate(T x) const;
    void print() const;
};

template <typename T>
Polynomial<T>::Polynomial(unsigned int degree) : coefficients(degree + 1, T(0))
{
}

template <typename T>
void Polynomial<T>::setCoefficient(unsigned int index, T value)
{
    coefficients[index] = value;
}

template <typename T>
T Polynomial<T>::getCoefficient(unsigned int index) const
{
    return coefficients[index];
}

template <typename T>
unsigned int Polynomial<T>::getDegree() const
{
    return coefficients.size() - 1;
}

template <typename T>
Polynomial<T> Polynomial<T>::operator+(const Polynomial<T>& other) const
{
    int maxDegree = std::max(getDegree(), other.getDegree());
    Polynomial<T> result(maxDegree);

    for (int i = 0; i <= maxDegree; ++i){
        T coeff = (i <= getDegree()) ? coefficients[i]: T(0);
        coeff +=  (i <= other.getDegree()) ? other.getCoefficient(i) : T(0);
        result.setCoefficient(i, coeff);
    }
    return result;
}

template <typename T>
Polynomial<T> Polynomial<T>::operator-(const Polynomial<T>& other) const
{
    int maxDegree = std::max(getDegree(), other.getDegree());
    Polynomial<T> result(maxDegree);

    for (int i = 0; i <= maxDegree; ++i){
        T coeff = (i <= getDegree()) ? coefficients[i]: T(0);
        coeff -=  (i <= other.getDegree()) ? other.getCoefficient(i) : T(0);
        result.setCoefficient(i, coeff);
    }
    return result;
}

template <typename T>
void Polynomial<T>::print() const
{
    for (size_t i = 0; i <= coefficients.size() -1; ++i) { 
        std::cout << coefficients[i] << "x^" << i;
        if (i <= coefficients.size() -2){
            std::cout << " + ";
        }
        
    }
    std::cout << std::endl;
}






