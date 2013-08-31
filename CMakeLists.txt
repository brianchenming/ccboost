cmake_minimum_required(VERSION 2.0)
project(ccboost)
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

set(GFLAGS_PATH ${CMAKE_SOURCE_DIR}/gflags)

# google-test: gtest and gtest_main will be imported
set(GTEST_PATH ${CMAKE_SOURCE_DIR}/gtest)

include_directories(
  "gflags/include"
  "${CMAKE_SOURCE_DIR}/include"
  "${CMAKE_SOURCE_DIR}/src"
  "${GTEST_PATH}/include"
  #"$ENV{GOOGLE_TEST}"
  #"${CMAKE_SOURCE_DIR}/test"
)

link_directories(
	"${GFLAGS_PATH}/lib"
)

add_executable(hello_world
  src/hello_world.cc
)

add_dependencies(hello_world gflags)

add_subdirectory(gflags)
add_subdirectory(gtest)

target_link_libraries(hello_world gflags)

add_executable(foo_test
  test/foo_test.cc
)

target_link_libraries(foo_test gtest gtest_main)

enable_testing()

add_test(
  NAME foo_test
  COMMAND foo_test
)
