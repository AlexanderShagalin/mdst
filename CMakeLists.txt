cmake_minimum_required(VERSION 3.15)

project(mdst LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SRC ./source)
include_directories(./include)

add_executable(mdst ${SRC}/main.cpp ${SRC}/my_lib.cpp)

install(TARGETS mdst
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

add_subdirectory(tests)
