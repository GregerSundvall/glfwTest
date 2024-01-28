#pragma once
#include "glm/vec3.hpp"

class Entity {
	float* vertices = nullptr;
	int vertexCount = 0;
	glm::vec3* position = nullptr;
	
public:
	Entity(const float* vertices, const int vertexCount, glm::vec3 position)
	{
		this->vertexCount = vertexCount;
		this->vertices = new float[vertexCount];
		for(int i = 0; i < vertexCount; ++i)
		{
			this->vertices[i] = vertices[i];
		}
	}
	
private:
	~Entity()
	{
		delete[] vertices;
		delete position;
	}
};
