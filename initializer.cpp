//#include <glad/glad.h>
//#include <GLFW/glfw3.h>
//#include <iostream>
//
//// Class to initialize GLFW
//class Initializer {
//private:
//    int Scr_Width, Scr_Height;
//    const char* vertexShaderSource = "#version 330 core\n"
//        "layout (location = 0) in vec3 aPos;\n"
//        "void main()\n"
//        "{\n"
//        "   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
//        "}\0";
//    const char* fragmentShaderSource = "#version 330 core\n"
//        "out vec4 FragColor;\n"
//        "void main()\n"
//        "{\n"
//        "   FragColor = vec4(1.0f, 0.5f, 0.2f, 1.0f);\n"
//        "}\n\0";
//
//public:
//    Initializer(int Scr_Width, int Scr_Height) {
//        // glfw: initialize and configure
//    // ------------------------------
//        glfwInit();
//        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//
//#ifdef __APPLE__
//        glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
//#endif
//
//        // glfw window creation
//        // --------------------
//        GLFWwindow* window = glfwCreateWindow(Scr_Width, Scr_Height, "ProgRunner", NULL, NULL);
//        if (window == NULL)
//        {
//            std::cout << "Failed to create GLFW window" << std::endl;
//            glfwTerminate();
//            exit(0);
//        }
//        glfwMakeContextCurrent(window);
//        glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
//
//        // glad: load all OpenGL function pointers
//        // ---------------------------------------
//        if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
//        {
//            std::cout << "Failed to initialize GLAD" << std::endl;
//            exit(0);
//        }
//    }
//    // process all input: query GLFW whether relevant keys are pressed/released this frame and react accordingly
//// ---------------------------------------------------------------------------------------------------------
//    void processInput(GLFWwindow* window)
//    {
//        if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
//            glfwSetWindowShouldClose(window, true);
//    }
//
//    // glfw: whenever the window size changed (by OS or user resize) this callback function executes
//    // ---------------------------------------------------------------------------------------------
//    void framebuffer_size_callback(GLFWwindow* window, int width, int height)
//    {
//        // make sure the viewport matches the new window dimensions; note that width and 
//        // height will be significantly larger than specified on retina displays.
//        glViewport(0, 0, width, height);
//    }
//
//    int shaderFunction()
//    {
//        // build and compile our shader program
//    // ------------------------------------
//    // vertex shader
//        unsigned int vertexShader = glCreateShader(GL_VERTEX_SHADER);
//        glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
//        glCompileShader(vertexShader);
//        // check for shader compile errors
//        int success;
//        char infoLog[512];
//        glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);
//        if (!success)
//        {
//            glGetShaderInfoLog(vertexShader, 512, NULL, infoLog);
//            std::cout << "ERROR::SHADER::VERTEX::COMPILATION_FAILED\n" << infoLog << std::endl;
//        }
//        // fragment shader
//        unsigned int fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
//        glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
//        glCompileShader(fragmentShader);
//        // check for shader compile errors
//        glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &success);
//        if (!success)
//        {
//            glGetShaderInfoLog(fragmentShader, 512, NULL, infoLog);
//            std::cout << "ERROR::SHADER::FRAGMENT::COMPILATION_FAILED\n" << infoLog << std::endl;
//        }
//        // link shaders
//        unsigned int shaderProgram = glCreateProgram();
//        glAttachShader(shaderProgram, vertexShader);
//        glAttachShader(shaderProgram, fragmentShader);
//        glLinkProgram(shaderProgram);
//        // check for linking errors
//        glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);
//        if (!success) {
//            glGetProgramInfoLog(shaderProgram, 512, NULL, infoLog);
//            std::cout << "ERROR::SHADER::PROGRAM::LINKING_FAILED\n" << infoLog << std::endl;
//        }
//        glDeleteShader(vertexShader);
//        glDeleteShader(fragmentShader);
//
//        return shaderProgram;
//    }
//
//};