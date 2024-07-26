cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 17)
set(PROJECT_NAME fut-card-generator)

project(${PROJECT_NAME})

include_directories(
  ${PROJECT_SOURCE_DIR}/include
)

file(GLOB_RECURSE SOURCES "src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})