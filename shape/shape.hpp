# include <iostream>

class Shape
{
private:
        char type_m;
        char background;

public:
        Shape(char type, char color);
        char getBackground() const;
};

Shape::Shape(char type, char color)
{
type_m(type);
background(color);

}

char Shape::getBackground() const
{
        return background;
}


