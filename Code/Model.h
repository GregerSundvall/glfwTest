#pragma once



struct Vertex {
	float X, Y, Z;
	Vertex(float x, float y, float z): X(x), Y(y), Z(z) {}
};

struct Triangle {
	// Vertex Vertices[3]{};
	Vertex A, B, C;
	Triangle(Vertex a, Vertex b, Vertex c): A(a), B(b), C(c) {}
};

struct Quad {
	Triangle A, B;
	Quad(Triangle a, Triangle b): A(a), B(b) {}
};

struct Box {
	Quad A, B, C, D, E, F;
	Box(Quad a, Quad b, Quad c, Quad d, Quad e, Quad f): A(a), B(b), C(c), D(d), E(e), F(f) {}
};


class Model {
	
public:
	
};
