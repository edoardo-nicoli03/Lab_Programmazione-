cmake_minimum_required(VERSION 3.24)

project(Laboratorio)

set(CMAKE_CXX_STANDARD 17)

find_package(wxWidgets REQUIRED COMPONENTS core base)

include(${wxWidgets_USE_FILE})

add_executable(Laboratorio main.cpp Cell.cpp FormualaCell.h FormualaCell.cpp FoglioCalcolo.h FoglioCalcolo.cpp)

target_link_libraries(Laboratorio ${wxWidgets_LIBRARIES})

