cmake_minimum_required (VERSION 3.16)
project (enlib)
add_library (enlib src/en.cpp)
target_include_directories(enlib PUBLIC include)