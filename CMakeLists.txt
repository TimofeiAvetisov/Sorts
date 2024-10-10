cmake_minimum_required(VERSION 3.10)

project(Sorts)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_CXX_STANDARD 17)

find_package(pybind11 REQUIRED)

include_directories(
    Sorts/Header
)

add_executable(main
    Sorts/Source/VectorOut.cpp 
    Sorts/Source/Bubble.cpp 
    Sorts/Source/Constructors.cpp 
    Sorts/Source/Counting.cpp 
    Sorts/Source/Heap.cpp 
    Sorts/Source/Insertion.cpp 
    Sorts/Source/Merge.cpp 
    Sorts/Source/Quick.cpp 
    Sorts/Source/Radix.cpp 
    Sorts/Source/Selection.cpp 
    main.cpp
)


set_target_properties(example PROPERTIES PREFIX "${PYTHON_MODULE_PREFIX}"
                                      SUFFIX "${PYTHON_MODULE_EXTENSION}")

target_link_libraries(example PRIVATE pybind11::module)