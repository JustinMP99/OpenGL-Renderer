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


find_package(OpenGL REQUIRED)
#find_package(glfw3 REQUIRED)

#==========================================================================================================
#ADD SUBDIRECTORY
#==========================================================================================================
add_subdirectory(Core)

target_include_directories(${PROJECT_NAME} PUBLIC Core/AdditionalLib/include/glad)
target_include_directories(${PROJECT_NAME} PUBLIC Core/AdditionalLib/include/GLFW)


#add_library(OpenGL_Renderer BUILD_SHARED_LIBS glfw3.h)


#set_property(TARGET OpenGL_Renderer PROPERTY CXX_STANDARD 17)




