cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 17)
set(PROJECT_NAME fut-card-generator)

project(${PROJECT_NAME})
include(${CMAKE_SOURCE_DIR}/version.cmake)

include_directories(
  ${PROJECT_SOURCE_DIR}/include
  ${PROJECT_SOURCE_DIR}/include/cli
  ${PROJECT_SOURCE_DIR}/include/core
  ${PROJECT_SOURCE_DIR}/include/card
  ${PROJECT_SOURCE_DIR}/include/player
  ${PROJECT_SOURCE_DIR}/include/template
  ${PROJECT_SOURCE_DIR}/include/generator
  ${PROJECT_SOURCE_DIR}/include/exceptions
  ${PROJECT_SOURCE_DIR}/include/template/font
  ${PROJECT_SOURCE_DIR}/include/template/color
  ${PROJECT_SOURCE_DIR}/include/generator/draw
  ${PROJECT_SOURCE_DIR}/include/generator/i18n
  ${PROJECT_SOURCE_DIR}/include/template/dimentions
  ${PROJECT_SOURCE_DIR}/include/template/dimentions/19
)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

find_package(CURL REQUIRED)
include_directories(${CURL_INCLUDE_DIRS})

set(LIB_JSON nlohmann_json::nlohmann_json)
add_subdirectory(external/json)
include_directories(external/json/include)

set(LIB_ARGPARSE nlohmann_json::nlohmann_json)
add_subdirectory(external/argparse)
include_directories(external/argparse/include)

file(GLOB_RECURSE SOURCES "src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})
target_compile_definitions(${PROJECT_NAME} PRIVATE PROJECT_NAME="${PROJECT_NAME}")
target_compile_definitions(${PROJECT_NAME} PRIVATE GLOBAL_VERSION="${GLOBAL_VERSION}")
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS} ${CURL_LIBRARIES} ${LIB_JSON} ${LIB_ARGPARSE})