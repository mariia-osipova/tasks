cmake_minimum_required(VERSION 3.30)
project(codeforces)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(GCC_STDCXX_INC
        "/opt/homebrew/Cellar/gcc/14.2.0_1/include/c++/14/aarch64-apple-darwin23"
)


# Явно пробуем два пути, где Homebrew-GCC кладёт свои заголовки
find_path(BITS_STDCPP_H_DIR
        NAMES bits/stdc++.h
        PATHS
        /opt/homebrew/Cellar/gcc/14.2.0_1/include/c++/14
        /opt/homebrew/Cellar/gcc/14.2.0_1/include/c++/14/aarch64-apple-darwin23
        NO_DEFAULT_PATH
)

if(BITS_STDCPP_H_DIR)
    message(STATUS "Found bits/stdc++.h in ${BITS_STDCPP_H_DIR}")
    include_directories(${BITS_STDCPP_H_DIR})
else()
    message(FATAL_ERROR "Could not find bits/stdc++.h in Homebrew include paths")
endif()

add_executable(codeforces
        codeforces/watermelon.cpp
)

add_executable(tasks
        book-examples/weird-algorithm.cpp
)
