cmake_minimum_required(VERSION 3.1)
project(nekoman_speak)

add_executable(test_nekoman test/test_nekoman.cpp)

# ----- only use this when add_library is used -----
function(link_lib executable_name library_name)
	add_library(${library_name} include/${library_name}.cpp)
	target_link_libraries(${executable_name} ${library_name})
	target_include_directories(${executable_name} PRIVATE include)
endfunction()

link_lib(test_nekoman nekoman)