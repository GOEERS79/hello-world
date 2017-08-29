#Build commands for command line
# sudo ln -s /Applications/"CMake.app"/Contents/bin/cmake cmake
#cmake -H. -Bbuild
#cmake --build build -- -j3

# Specify the minimum version for CMake

cmake_minimum_required(VERSION 2.8)

#SET(CMAKE_INSTALL_PREFIX /Users/Joe)

# Project's name

project(Tutorial)

#Try to use FORCE when you do SET: 
#set (CMAKE_INSTALL_PREFIX /Users/Joe/temp CACHE PATH "Cmake prefix" FORCE)

# The version number.
set (Tutorial_VERSION_MAJOR 1)
set (Tutorial_VERSION_MINOR 0)

# does this system provide the log and exp functions?

#include (CheckFunctionExists)
#check_function_exists (log HAVE_LOG)
#check_function_exists (exp HAVE_EXP)
 
# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/TutorialConfig.h.in"
  "${PROJECT_BINARY_DIR}/TutorialConfig.h"
  )
 
# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}")
 
# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
#set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

set(CMAKE_LIB_DIR ${CMAKE_SOURCE_DIR}/lib)
set(LIBRARY_OUTPUT_PATH ${CMAKE_LIB_DIR})

# The following folder will be included
#include_directories("${PROJECT_SOURCE_DIR}")

# should we use our own math functions?
#option (USE_MYMATH "Use tutorial provided math implementation" ON)

#if (USE_MYMATH)
  #include_directories ("${PROJECT_SOURCE_DIR}/JoeFunctions")
  #add_subdirectory (JoeFunctions)
  #include_directories ("${PROJECT_SOURCE_DIR}/MathFunctions")
  #add_subdirectory (MathFunctions)
  #set (EXTRA_LIBS ${EXTRA_LIBS} JoeFunctions MathFunctions)
#endif (USE_MYMATH)

# add the executable

add_executable(Tutorial ${PROJECT_SOURCE_DIR}/main.cpp)
#target_link_libraries (Tutorial ${EXTRA_LIBS})

# add the install targets
install (TARGETS Tutorial DESTINATION bin)
install (FILES "${PROJECT_BINARY_DIR}/TutorialConfig.h"        
         DESTINATION include)

############ TESTING ####################









