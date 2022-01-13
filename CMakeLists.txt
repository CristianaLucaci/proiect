# CMake version
cmake_minimum_required(VERSION 3.0)

set(myproject "proiect")
set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
set(THREADS_PREFER_PTHREAD_FLAG TRUE)
# Project name
project(${myproject})

find_package(Threads REQUIRED)

# Define the executable
#add_executable(${PROJECT_NAME} src/main.cpp)
add_executable(${PROJECT_NAME} main.cpp)  
target_link_libraries(proiect ${CMAKE_THREAD_LIBS_INIT})