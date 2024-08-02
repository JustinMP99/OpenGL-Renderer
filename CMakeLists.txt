

cmake_minimum_required(VERSION 3.5.0)
project(OpenGL_Renderer VERSION 0.0.1 LANGUAGES C CXX)


include (CTest)
enable_testing()


add_executable(OpenGL_Renderer ./Application/main.cpp)


set_property(TARGET OpenGL_Renderer PROPERTY CXX_STANDARD 17)


