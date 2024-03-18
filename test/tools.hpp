#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>

class Tools {
public:
    Tools(const std::string& name, const std::string& function);
    void malfunction();
    std::string name;
    std::string function;
    std::string state;
};

Tools::Tools(const std::string& name, const std::string& function)
: name(name)
, function(function)
, state("READY")
{
}
void Tools::malfunction() 
{
    if (rand() % 5 == 0) {
        state = "MALFUNCTION";
    }
}
