#include <iostream>

#define GLFW_INCLUDE_NONE
#include <glfw3.h>
#include <glad.h>


// #include "../Core/AdditionalLib/includes/glad/glad.h"
// #include "../Core/AdditionalLib/includes/GLFW/glfw3.h"

char hello;
GLFWwindow* window;
int main()
{
    //glfwInit();
    // glfw3::glfwInit();
    // glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    // glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR,3);
    // glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // window = glfwCreateWindow(1280, 720, "OpenGL Renderer", NULL, NULL);
    
    std::cout << "Hello, World!" << std::endl;
    std::cout<<"I Can't Believe this Works!" << std::endl;


    return 0;

}


