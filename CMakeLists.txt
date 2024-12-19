cmake_minimum_required(VERSION 3.10)
project(hft-platform LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3 -march=native -Wall -Wextra -Werror")

# Add src directory (where main code is)
add_subdirectory(src)

# Add tests directory (where tests and GoogleTest are integrated)
add_subdirectory(tests)
