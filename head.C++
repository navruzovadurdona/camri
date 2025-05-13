cmake_minimum_required(VERSION 3.14)
project(PacShow)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        PacShow/cntrgame.h
        PacShow/fruit.h
        PacShow/gameSound.h
        PacShow/gameText.h
        PacShow/ghost.h
        PacShow/maze.h
        PacShow/pac.h
        PacShow/PacShow.cpp
        PacShow/PacShow.rc
        PacShow/resource.h
        PacShow/timer.h)
add_executable(PacShow ${SOURCE_FILES})
include_directories(/usr/local/include)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(PacShow sfml-system sfml-window sfml-graphics sfml-audio sfml-network)
