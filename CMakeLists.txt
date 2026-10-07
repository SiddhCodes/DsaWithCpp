cmake_minimum_required(VERSION 3.20)

project(DsaWithCpp)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE CPP_FILES
        "${CMAKE_SOURCE_DIR}/*.cpp"
)

foreach(CPP_FILE ${CPP_FILES})
    get_filename_component(FILE_NAME ${CPP_FILE} NAME_WE)
    add_executable(${FILE_NAME} ${CPP_FILE})
endforeach()