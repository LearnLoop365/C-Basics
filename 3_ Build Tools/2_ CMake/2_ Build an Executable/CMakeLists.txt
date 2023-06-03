cmake_minimum_required(VERSION 3.26)

project(hw C)

add_executable(build_exec a.c)

set_target_properties(
    build_exec
        PROPERTIES
            RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
            OUTPUT_NAME foo
)
