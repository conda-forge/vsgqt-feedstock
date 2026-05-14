cmake_minimum_required(VERSION 3.16)

project(vsgqt_consumer LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(Qt5 COMPONENTS Core REQUIRED)
find_package(vsgQt CONFIG REQUIRED)

add_executable(vsgqt_consumer main.cpp)
target_link_libraries(vsgqt_consumer PRIVATE Qt5::Core vsgQt::vsgQt)

enable_testing()
add_test(NAME vsgqt_consumer COMMAND vsgqt_consumer)
