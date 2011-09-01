project(libTeamTask)
cmake_minimum_required(VERSION 2.6)
find_package(Qt4 REQUIRED)

include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR})

set(libTeamTask_SRCS libTeamTask.cpp main.cpp)
qt4_automoc(${libTeamTask_SRCS})
add_executable(libTeamTask ${libTeamTask_SRCS})
target_link_libraries(libTeamTask ${QT_QTCORE_LIBRARY})
