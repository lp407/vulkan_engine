#include "glfw_window.h"

CustomWindow::CustomWindow(){
    _window = nullptr;
}
void CustomWindow::OpenWindow() {
    glfwInit();
    _window = glfwCreateWindow(800, 600, "MY FIRST WINDOW", NULL, NULL);
}

bool CustomWindow::Update() {
glfwPollEvents();

return glfwWindowShouldClose(_window);
}