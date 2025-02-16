#include <iostream>
#include<GLFW/glfw3.h>

int main() {
	if (!glfwInit()) {
		std::cout << "Filed loading open gl" << std::endl;
		return -1;
	}

	GLFWwindow* window = glfwCreateWindow(850, 600, "Html Creator ру", nullptr, nullptr);

	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();
	}
	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}