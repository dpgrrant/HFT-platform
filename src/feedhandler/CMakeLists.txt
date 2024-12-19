add_library(feedhandler_lib STATIC feed_handler.cpp)
target_include_directories(feedhandler_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
