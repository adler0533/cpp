#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include "robot.hpp"

class Application : public Robot 
{
public:
    Application();
    void provisionNewRobot(const std::string& robotName, const std::string& callsign, Model* model);
    void issueCommandsToRobot();
    
private:
    std::vector<Robot> robots;   

};

Application::Application() : Robot("Application", "APP", nullptr)
{
}

void Application::provisionNewRobot(const std::string& robotName, const std::string& callsign, Model* model)
{
if (rand() % 10 < 8) {
        Robot newRobot(robotName, callsign, model);
        robots.push_back(newRobot);
        std::cout << "New robot provisioned successfully." << std::endl;
    } else {
        std::cout << "Failed to provision new robot." << std::endl;
    }
}

void Application::issueCommandsToRobot()
{

}




