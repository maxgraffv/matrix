cmake_minimum_required(VERSION 3.13)

project(Matrix C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 20)

include_directories(
	$(CMAKE_CURRENT_LIST_DIR)/include
)

add_library(
	matrix_lib
	src/matrix.c
)

add_executable(main example/main.c)

target_link_libraries(main matrix_lib)
