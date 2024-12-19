cmake_minimum_required(VERSION 3.10)
project(hft-platform LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3 -march=native -Wall -Wextra -Werror")

add_subdirectory(feedhandler)
add_subdirectory(order_gateway)
add_subdirectory(strategies)
add_subdirectory(utils)

# Example top-level binary
add_executable(hft_main main.cpp)
target_link_libraries(hft_main PRIVATE feedhandler_lib order_gateway_lib strategies_lib utils_lib)
