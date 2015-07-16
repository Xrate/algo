project(algo)
cmake_minimum_required(VERSION 2.8)
set(CMAKE_C_FLAGS -m64 ${CMAKE_C_FLAGS})
set(BOOST_PATH d:/dev/boost_1_58_0)

file(GLOB_RECURSE SRCS *.cpp)
file(GLOB_RECURSE HDRS *.h)

INCLUDE_DIRECTORIES(src)
INCLUDE_DIRECTORIES(${BOOST_PATH})

LINK_DIRECTORIES(${BOOST_PATH}/lib64-msvc-12.0)

add_executable(${PROJECT_NAME} ${HDRS} ${SRCS})
TARGET_LINK_LIBRARIES(${PROJECT_NAME} libboost_unit_test_framework-vc120-mt-gd-1_58.lib)
