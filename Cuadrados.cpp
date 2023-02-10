#include "Cuadrados.h"

Cuadrados::Cuadrados() {

}

void Cuadrados::DibujarCuadrados(float x, float y, float z, float tamanio, float rotacion, float rx, float ry, float rz) {


    glPushMatrix();
        glTranslatef(x, y, z);
        glRotatef(rotacion, rx, ry, rz);
        glutSolidCube(tamanio);
    glPopMatrix();
}