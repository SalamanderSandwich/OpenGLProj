#version 330 core
out vec4 FragColor;
in vec3 outColor;
in vec2 texCord;

uniform sampler2D texture1;
uniform sampler2D texture2;
void main()
{
	float mix_value = texture1.a * 0.2;
	FragColor = mix(texture(texture1, texCord), texture(texture2, texCord), mix_value);
//FragColor = vec4(outColor,1.0f);
};