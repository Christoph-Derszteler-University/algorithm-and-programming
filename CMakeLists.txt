cmake_minimum_required(VERSION 3.29)
project(algorithm_and_programming)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)

FetchContent_Declare(fmt GIT_REPOSITORY https://github.com/fmtlib/fmt GIT_TAG e69e5f977d458f2650bb346dadf2ad30c5320281) # 10.2.1
FetchContent_MakeAvailable(fmt)

add_executable(first_assignment assignments/first/assignment.cpp)
add_executable(second_task_2 assignments/second/uebungscode_02_03.cpp)
add_executable(second_task_3 assignments/second/uebungscode_02_04.cpp)
add_executable(third_task_2 assignments/third/sin.cpp)
add_executable(third_task_3 assignments/third/sqrt.cpp)
add_executable(fourth_task_1_2 assignments/fourth/derszteler.cpp)
add_executable(fourth_task_2 assignments/fourth/references.cpp)
add_executable(fourth_task_3 assignments/fourth/examples/demo.cpp assignments/fourth/src/meine_funktionen.cpp assignments/fourth/include/meine_funktionen.hpp)
add_executable(fifth_task_1 assignments/uebungscode_05/include/minsort_in_place.hpp assignments/uebungscode_05/src/minsort_in_place.cpp assignments/uebungscode_05/examples/aufg1.cpp)
add_executable(fifth_task_2 assignments/uebungscode_05/include/hanoi/hanoi.hpp assignments/uebungscode_05/src/hanoi.cpp assignments/uebungscode_05/examples/aufg2.cpp)
add_executable(fifth_task_3 assignments/uebungscode_05/include/hanoi/hanoi.hpp assignments/uebungscode_05/include/hanoi/hanoi_loesen.hpp assignments/uebungscode_05/src/hanoi.cpp assignments/uebungscode_05/src/hanoi_loesen.cpp assignments/uebungscode_05/examples/aufg3.cpp)

target_link_libraries(fourth_task_3 fmt::fmt)