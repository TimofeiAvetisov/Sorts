cmake_minimum_required(VERSION 3.10)

project(Sorts)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()
set(CMAKE_CXX_STANDARD 17)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR})

include_directories(
    "C:/Users/Timofei/AppData/Local/Programs/Python/Python310/Lib/site-packages/pybind11/include"
    "C:/Users/Timofei/AppData/Local/Programs/Python/Python310/include"
    Sorts/Header
)

add_library(sorts_module MODULE
    Sorts/Source/Busy_wait.cpp
    Sorts/Source/Get.cpp
    Sorts/Source/Swap_time.cpp
    Sorts/Source/Constructors.cpp
    Sorts/Source/Bubble.cpp
    #Sorts/Source/Counting.cpp
    Sorts/Source/Heap.cpp
    Sorts/Source/Insertion.cpp
    #Sorts/Source/Merge.cpp
    Sorts/Source/Quick.cpp
    #Sorts/Source/Radix.cpp
    Sorts/Source/Selection.cpp
    main.cpp
)

set_target_properties(sorts_module PROPERTIES PREFIX ""
                                      SUFFIX ".pyd")

target_link_libraries(sorts_module PRIVATE "C:/Users/Timofei/AppData/Local/Programs/Python/Python310/libs/python310.lib")
