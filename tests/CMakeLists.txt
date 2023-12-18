find_package(GTest REQUIRED)

# Add the test executable
# add_executable(tests beer_test.cpp)
# Link the library and GTest to the test executable

# Add test
# add_test(NAME tests COMMAND tests)

add_executable(unittests)
target_sources(unittests PRIVATE
  beer_test.cpp
)
target_link_libraries(unittests PRIVATE beer_lib gmock_main)
add_test(NAME unittests COMMAND unittests)