#### __Develop settings__ [[settings]](https://ladofa.blogspot.com/2020/08/c-2.html)
- ubuntu 20.04
- cmake 3.16.3

#### ubuntu c++ devel
1. cheapter 1 [build c++]
- sudo apt install build-essential 
- g++ -c main.cpp
- g++ -c en.cpp
- g++ -o test main.o en.o
    - g++ -v
    - ecport CPLUS_INCLUDE_PATH
- myfunc make library
    - g++ -c en.cpp
    - ar rcs libmy.a en.o
    - g++ -o test main.cpp -lmy -L./
2. cheapter 2 [writing makefile]
- How to using makefile in developing c++ in ubuntu 

3. cheapter3 [CMake Basic] 
- sudo apt install cmake
    - cmake --version 
    - cmake_minimum_required(VERSION3.16)
    - project (CMakeBuild)
    - add_executable (CMakeBuild *.cpp *.h)
- cmake . && make
- library structure
- out package added
- 
4. opencv input 
- unzip opencv-4.4.0.zip
- ~/CMakeBuild/build$ cmake .. && make
