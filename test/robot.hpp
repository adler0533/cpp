#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include "model.hpp"

class Robot : public Model {
public:
    Robot(const std::string& name, const std::string& callsign, Model* model);
    std::string name;
    std::string callsign;
    std::string state;
};


Robot::Robot(const std::string& name, const std::string& callsign, Model* model)
: name(name)
, callsign(callsign)
, Model(*model)
{
    state = "ACTIVE";
}

