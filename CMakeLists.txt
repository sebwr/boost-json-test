cmake_minimum_required (VERSION 3.8)
set(default_build_type "Release")
set (CMAKE_CXX_STANDARD 20)

# Define project
project (boostJsonTest)

set(Boost_DEBUG ON)

# find necessary packages
find_package(
    Boost 1.78.0 REQUIRED
    COMPONENTS  json
)

add_executable (${PROJECT_NAME}
    main.cpp
)

set_source_files_properties(
    *.h
    *.cpp
PROPERTIES
    COMPILE_FLAGS "-O3 -DNDEBUG -Wall -Wextra")
