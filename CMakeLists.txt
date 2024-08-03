#==========================================================================================================
#SET CMAKE MINIMUM VERSION
#==========================================================================================================
# Sets the Minimum Required CMake Version (Version 3.0.0 is Deprecated and gives Warnings)
cmake_minimum_required(VERSION 3.5.0)


#==========================================================================================================
#SET EXECUTABLE
#==========================================================================================================
#Sets the Project Name, Version, and Language
project(OpenGL_Renderer VERSION 0.0.1 LANGUAGES C CXX)


# include (CTest)
# enable_testing()

#==========================================================================================================
#SET EXECUTABLE
#==========================================================================================================
# OpenGL_Renderer is the Name of the Executable File Generated AND the Name of the CMake Target
# ${PROJECT_NAME} Uses the same Name Specified for the Project which in this case is "OpenGL_Renderer"
add_executable(${PROJECT_NAME} ./Application/main.cpp)


#==========================================================================================================
#ADD SUBDIRECTORY
#==========================================================================================================
add_subdirectory(Core)




