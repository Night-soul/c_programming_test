cmake_minimum_required(VERSION 2.6)
# Collects the names of all the source files in the specified directory and stores the list in the <variable> provided
aux_source_directory(arrays ex1.c)
aux_source_directory(functions ex2.c)
aux_source_directory(pointers ex3.c)

# Set library output path
set(EXECUTABLE_OUTPUT_PATH ../cmake_build)



ADD_EXECUTABLE(arrays.ex1 ${ex1.c})
ADD_EXECUTABLE(functions.ex1 ${ex2.c})
ADD_EXECUTABLE(pointers.ex1 ${ex3.c})

