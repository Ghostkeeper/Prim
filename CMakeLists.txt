project(Prim)
cmake_minimum_required(VERSION 3.2)

set(source_files_relative
	src/main.cpp
)
set(source_files "")
foreach(source_file_relative ${source_files_relative})
	list(APPEND source_files ${CMAKE_CURRENT_SOURCE_DIR}/${source_file_relative})
endforeach()

include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}/src
)

add_executable(prim ${source_files})