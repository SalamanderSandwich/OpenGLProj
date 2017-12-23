#ifndef SHADER_H
#define SHADER_H
class Shader
{
public:
	// the program ID
	unsigned int shaderProgram;

	// constructor reads and builds the shader
	Shader(const GLchar* vertexPath, const GLchar* fragmentPath);
	// use/activate the shader
	void use();
	// utility uniform functions
	void setBool(const std::string &name, bool value);
	void setInt(const std::string &name, int value);
	void setFloat(const std::string &name, float value);
};

#endif