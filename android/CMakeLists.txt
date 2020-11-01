cmake_minimum_required(VERSION 3.4.1)

add_library(native_add
        SHARED
        ../ios/Runner/Classes/NativeAdd.cpp
        ../ios/Runner/Classes/NativeAdd.hpp)