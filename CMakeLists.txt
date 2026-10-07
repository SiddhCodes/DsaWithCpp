cmake_minimum_required(VERSION 3.20)

project(DsaWithCpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE CPP_FILES CONFIGURE_DEPENDS
        "${CMAKE_SOURCE_DIR}/*.cpp"
)

list(FILTER CPP_FILES EXCLUDE REGEX "${CMAKE_BINARY_DIR}/.*")

foreach(CPP_FILE ${CPP_FILES})
    get_filename_component(FILE_NAME ${CPP_FILE} NAME_WE)

    add_executable(${FILE_NAME} ${CPP_FILE})
endforeach()