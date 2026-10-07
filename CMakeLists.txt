cmake_minimum_required(VERSION 3.20)

project(DsaWithCpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Find all C++ source files in the project
file(GLOB_RECURSE CPP_FILES CONFIGURE_DEPENDS
        "${CMAKE_SOURCE_DIR}/*.cpp"
)

# Ignore CMake's build directory
list(FILTER CPP_FILES EXCLUDE REGEX "^${CMAKE_BINARY_DIR}/.*")

# Create one executable for every .cpp file
foreach(CPP_FILE IN LISTS CPP_FILES)

    # Get filename without extension
    get_filename_component(FILE_NAME "${CPP_FILE}" NAME_WE)

    # Create a unique target name using the relative path
    file(RELATIVE_PATH RELATIVE_FILE "${CMAKE_SOURCE_DIR}" "${CPP_FILE}")
    string(REPLACE "/" "_" TARGET_NAME "${RELATIVE_FILE}")
    string(REPLACE "\\" "_" TARGET_NAME "${TARGET_NAME}")
    string(REPLACE ".cpp" "" TARGET_NAME "${TARGET_NAME}")
    string(REGEX REPLACE "[^A-Za-z0-9_-]" "_" TARGET_NAME "${TARGET_NAME}")

    add_executable("${TARGET_NAME}" "${CPP_FILE}")

endforeach()