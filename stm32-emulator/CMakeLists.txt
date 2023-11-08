#
# ^file     CMakeLists.txt
# ^author   Ondrej Nedojedly (https://www.github.com/ondranedo)
# ^version  0.0.1
# ^date     03-November-2023
# ^brief    Hlavni CMake
#
#
# ^note     Tento soubor je soucasti projektu stm32-emulator
# ^copyright  Copyright SPSE Havirov (c) 2023
#

cmake_minimum_required(VERSION 3.0)

project(stm32-emulator VERSION 0.0.1 LANGUAGES C)

set(CMAKE_C_STANDARD_REQUIRED true)
set(CMAKE_C_STANDARD 99)

set(CMAKE_CXX_STANDARD_REQUIRED true)
set(CMAKE_CXX_STANDARD 11)

if(CMAKE_C_COMPILER_ID STREQUAL "GNU")
    #add_compile_options(-Wall -Wextra -Wpedantic -Werror)
endif ()


add_executable(testbed testbed.c)
target_link_directories(testbed PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory(impl)
target_link_libraries(testbed PUBLIC stm32-emulator-impl)

if(CMAKE_C_COMPILER_ID STREQUAL "GNU")
    target_link_libraries(testbed PUBLIC m)
endif ()