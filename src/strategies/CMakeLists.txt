add_library(strategies_lib STATIC example_strategy.cpp)
target_include_directories(strategies_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
