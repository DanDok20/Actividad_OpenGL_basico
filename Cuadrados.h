#pragma once

#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include "glsl.h"

class Cuadrados
{
public:
	Cuadrados();

	void DibujarCuadrados(float x, float y, float z, float tamanio, float rotacion, float rx, float ry, float rz);
};

