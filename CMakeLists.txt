cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 17)
set(PROJECT_NAME fut-card-generator)

project(${PROJECT_NAME})

include_directories(
  ${PROJECT_SOURCE_DIR}/include
  ${PROJECT_SOURCE_DIR}/include/core
  ${PROJECT_SOURCE_DIR}/include/card
  ${PROJECT_SOURCE_DIR}/include/player
  ${PROJECT_SOURCE_DIR}/include/generator
  ${PROJECT_SOURCE_DIR}/include/template
  ${PROJECT_SOURCE_DIR}/include/template/font
  ${PROJECT_SOURCE_DIR}/include/template/color
  ${PROJECT_SOURCE_DIR}/include/generator/draw
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

file(GLOB_RECURSE SOURCES "src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS} ${CURL_LIBRARIES} ${LIB_JSON} ${LIB_I18N})