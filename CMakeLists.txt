cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 17)
set(PROJECT_NAME fut-card-generator)

project(${PROJECT_NAME})

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Source files
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Link external libraries (if any)
# target_link_libraries(${PROJECT_NAME} pthread)
