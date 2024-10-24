cmake_minimum_required(VERSION 3.29)
project(CppDeveloper)

set(CMAKE_CXX_STANDARD 20)

add_executable(main main.cpp)

add_executable(
        condicional 01_fundamentos/01_estructura_control/decision/condicional.cpp

)

add_executable(
        estructura_switch 01_fundamentos/01_estructura_control/decision/estructura_switch.cpp
)

add_executable(
        para 01_fundamentos/01_estructura_control/repetitivas/para.cpp

)

add_executable(
        mientras 01_fundamentos/01_estructura_control/repetitivas/mientras.cpp

)

add_executable(
        hacer_mientras 01_fundamentos/01_estructura_control/repetitivas/hacer_mientras.cpp
)