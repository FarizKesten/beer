cmake_minimum_required(VERSION 3.15)
project(beer)
enable_testing()
set(CXX_STANDARD_REQUIRED ON)
set(CXX_STANDARD 20)

# Fetch googletest
set(gtest_force_shared_crt ON)
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.11.0)

FetchContent_GetProperties(googletest)
if(NOT googletest_POPULATED)
  FetchContent_Populate(googletest)
  add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})
endif()

# Set desired compilation flags (assuming GCC)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wpedantic -Weffc++ -std=c++20")

include_directories(include)
add_subdirectory(src)
add_subdirectory(tests)
# Declare an interface library providing the necessary include paths
# add_library(beer_lib)
# target_sources(beer_lib PRIVATE
#     src/beer.cpp
#     include/beer.hpp
# )
# target_include_directories(beer_lib PUBLIC include/)

# Find and setup unittests and link against lib and unittests framework
# Place all unittests in one executable
# add_executable(unittests)
# target_sources(unittests PRIVATE
#     tests/beer_test.cpp
# )
# target_link_libraries(unittests PRIVATE beer_lib gmock_main)
# add_test(NAME unittests COMMAND unittests)

# Configure project specs
# set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT unittests)
# set_target_properties(gtest PROPERTIES INTERFACE_SYSTEM_INCLUDE_DIRECTORIES $<TARGET_PROPERTY:gtest,INTERFACE_INCLUDE_DIRECTORIES>)
# set_target_properties(gmock PROPERTIES INTERFACE_SYSTEM_INCLUDE_DIRECTORIES $<TARGET_PROPERTY:gmock,INTERFACE_INCLUDE_DIRECTORIES>)
