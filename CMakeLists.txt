cmake_minimum_required(VERSION 2.0)
project(ccboost)
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

set(GFLAGS_PATH ${CMAKE_SOURCE_DIR}/gflags)


include_directories(
    "gflags/include"
    "${CMAKE_SOURCE_DIR}/include" 
    "${CMAKE_SOURCE_DIR}/src" 
    #"$ENV{GOOGLE_TEST}"
    #"$ENV{GOOGLE_TEST}/include"
    #"${CMAKE_SOURCE_DIR}/test"
)
#add_library(gtest
    #$ENV{GOOGLE_TEST}/src/gtest-all.cc
#)
#add_library(gtest_main
    #$ENV{GOOGLE_TEST}/src/gtest_main.cc
#)

link_directories(
	"${GFLAGS_PATH}/lib"
)

add_executable(hello_world 
    src/hello_world.cc
)

add_dependencies(hello_world gflags)

add_subdirectory(gflags)

target_link_libraries(hello_world gflags)

#target_link_libraries(test/dna_test gtest gtest_main pthread)
#target_link_libraries(test/aligner_test gtest gtest_main pthread)
#target_link_libraries(test/ref_test gtest gtest_main pthread)
#enable_testing()
#add_test(
    #NAME dna_test
    #COMMAND test/dna_test 
#)
#add_test(
    #NAME aligner_test
    #COMMAND test/aligner_test
#)
#add_test(
    #NAME ref_test
    #COMMAND test/ref_test
#)
