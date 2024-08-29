cmake_minimum_required(VERSION 3.16)
project(Master VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${PROJECT_SOURCE_DIR}/src)

set(GTEST_SOURCE_DIR /home/emilano/googletest)

add_subdirectory(${GTEST_SOURCE_DIR} ${CMAKE_BINARY_DIR}/googletest-build)

set(MAIN_SOURCES
    src/calculator.cpp
    main.cpp
)

add_executable(${PROJECT_NAME} ${MAIN_SOURCES})

set(TEST_SOURCES
    src/calculator.cpp
    tests/test.cpp
)

add_executable(${PROJECT_NAME}_test ${TEST_SOURCES})

target_link_libraries(${PROJECT_NAME}_test gtest gtest_main)

enable_testing()

# Register the test with CTest
add_test(NAME ExampleTest COMMAND ${PROJECT_NAME}_test)
