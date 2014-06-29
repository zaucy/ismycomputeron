project(ismycomputeron)
cmake_minimum_required(VERSION 2.8)

string(FIND ${CMAKE_BINARY_DIR} ${CMAKE_SOURCE_DIR} CMAKE_BINARY_IN_SOURCE_DIR)

if(CMAKE_BINARY_IN_SOURCE_DIR EQUAL 0)
	message(SEND_ERROR "Do NOT make the build directory inside the source or any subdirectory of the source.")
endif()

if(CMAKE_COMPILER_IS_GNUCXX)

	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libgcc")
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++")
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static")

endif()

set(HEADERS
	"wait_message.h"
)

set(SOURCES
	"wait_message.cpp"
	"main.cpp"
)

add_executable(${PROJECT_NAME} ${HEADERS} ${SOURCES})
