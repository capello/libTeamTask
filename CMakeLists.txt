project(libTeamTask)
cmake_minimum_required(VERSION 2.6)
find_package(Qt4 REQUIRED)

include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR} interface include)

set(libTeamTask_SRCS sources/libTeamTask.cpp)
set(libTeamTask_IF interface/libTeamTask.h)
set(libTeamTask_MOC interface/libTeamTask.h)
set(libTeamTask_IN )
#qt4_automoc(${libTeamTask_SRCS} ${libTeamTask_IF} ${libTeamTask_IN})
QT4_WRAP_CPP(libTeamTask_HEADERS_SRC ${libTeamTask_MOC})
INCLUDE_DIRECTORIES( ${CMAKE_BINARY_DIR} )
add_library(libTeamTask SHARED ${libTeamTask_SRCS} ${libTeamTask_HEADERS_SRC})
