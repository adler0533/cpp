# include <iostream>
# include "shape.hpp"

class Circle : public Shape
{
public:
        Circle (char color, int size);
private:
        int size_m;    
};

Circle::Circle(char color, int size)
{
Shape('C', color);
size_m = size;
}


int main() {
    Circle c('B', 5);
    std::cout << "Background color of circle: " << c.getBackground() << std::endl;

    return 0;
}