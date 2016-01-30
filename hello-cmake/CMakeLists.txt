cmake_minimum_required(VERSION 2.8)

set(PROJECT_NAME "hello")
set(SRC_LIST hello.cxx)

project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} ${SRC_LIST})
