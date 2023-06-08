### Develop settings
- ubuntu 20.04
- cmake 3.16.3

#### ubuntu c++ devel
1. cheapter 1
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

#### wait a minutes at git commit
2. sudo apt install cmake
- cmake --version 
    - cmake_minimum_required(VERSION3.16)
    - project (CMakeBuild)
    - add_executable (CMakeBuild *.c *.h)
- cmake . && make