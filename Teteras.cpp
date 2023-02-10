#include "Teteras.h"

Teteras::Teteras() {

}

void Teteras::DibujarTeteras(float x, float y, float z, float tamanio, float rotacion, float rx, float ry, float rz) {


    glPushMatrix();
        glTranslatef(x, y, z);
        glRotatef(rotacion, rx, ry, rz);
        glutSolidTeapot(tamanio);
    glPopMatrix();
}