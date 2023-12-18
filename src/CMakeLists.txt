# Add the library target
add_library(beer_lib
            beer.cpp
            )

# Include directories for the library
target_include_directories(beer_lib PUBLIC ../include)

# Add the executable target
add_executable(main main.cpp)

# Link the library to the executable
target_link_libraries(main beer_lib)
