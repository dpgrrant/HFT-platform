add_library(order_gateway_lib STATIC order_gateway.cpp)
target_include_directories(order_gateway_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
