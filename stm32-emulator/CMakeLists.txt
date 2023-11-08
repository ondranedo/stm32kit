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

set(CMAKE_C_STANDARD_REQUIRED true)
set(CMAKE_C_STANDARD 99)

add_executable(testbed testbed.c)
target_link_directories(testbed PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
