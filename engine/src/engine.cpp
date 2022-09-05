#include "engine.h"
#include <iostream>
#include <GLFW/glfw3.h>
#include "spdlog/spdlog.h"
#include "platform/window.h"
#include "platform/glfw_window.h"
#include "service_locator.h"

void Shmengine::Init(){
    std::cout << "Initizialising window." << std::endl;
    ServiceLocator::Provide(new CustomWindow());
}