#include <iostream>
#include "engine.h"
#include <glm/glm.hpp>
#include "service_locator.h"

int main(int argc, char **argv)
{
    std::cout<<"Hello World!"<<std::endl;
    Shmengine::Init();
    ServiceLocator::GetWindow()->OpenWindow();

    while(!ServiceLocator::GetWindow()->Update());
}