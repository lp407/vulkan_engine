cmake_minimum_required(VERSION 3.23)
project(vulkan_dev_env VERSION 0.0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)

add_subdirectory(app)
add_subdirectory(engine)
