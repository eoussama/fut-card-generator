cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 17)
set(PROJECT_NAME fut-card-generator)

project(${PROJECT_NAME})

include_directories(
  ${PROJECT_SOURCE_DIR}/include
  ${PROJECT_SOURCE_DIR}/include/card
  ${PROJECT_SOURCE_DIR}/include/player
  ${PROJECT_SOURCE_DIR}/include/generator
  ${PROJECT_SOURCE_DIR}/include/card/dimentions
  ${PROJECT_SOURCE_DIR}/include/card/dimentions/19
)

file(GLOB_RECURSE SOURCES "src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})