cmake_minimum_required(VERSION 3.23)
project(vulkan_application VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

# vulkan_application.exe
add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} vulkan_engine)
target_include_directories(${PROJECT_NAME} PRIVATE vulkan_engine)

