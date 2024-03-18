#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include "tools.hpp"

class Model : public Tools {
public:
        Model(const std::string& modelName);
        std::vector<Tools> tools;
};


Model::Model(const std::string& modelName)
: Tools(modelName, "Model")
{
}
    



