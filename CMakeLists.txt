
cmake_minimum_required (VERSION 3.16)
project (test)
find_package(OpenCV REQUIRED)
add_subdirectory(enlib)
add_executable (test main.cpp)
target_link_libraries(test PUBLIC enlib ${OpenCV_LIBS})
target_include_directories(enlib PUBLIC ${OpenCV_INCLUDE_DIRS})