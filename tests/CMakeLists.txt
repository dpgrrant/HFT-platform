cmake_minimum_required(VERSION 3.10)

# If using submodule for GTest:
add_subdirectory(gtest)
include_directories(gtest/googletest/include)
include_directories(gtest/googlemock/include)

add_executable(test_feedhandler test_feedhandler.cpp)
target_link_libraries(test_feedhandler PRIVATE gtest gtest_main feedhandler_lib)

add_executable(test_order_gateway test_order_gateway.cpp)
target_link_libraries(test_order_gateway PRIVATE gtest gtest_main order_gateway_lib)

add_executable(test_strategies test_strategies.cpp)
target_link_libraries(test_strategies PRIVATE gtest gtest_main strategies_lib)

enable_testing()
add_test(NAME FeedHandlerTests COMMAND test_feedhandler)
add_test(NAME OrderGatewayTests COMMAND test_order_gateway)
add_test(NAME StrategiesTests COMMAND test_strategies)
