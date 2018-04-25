#include "retangulo.h"


Retangulo::Retangulo(float x, float y, float largura, float altura)
{
    addvertices(x,y);
    addvertices(x, y-altura);
    addvertices(x+largura, y-altura);
    addvertices(x+largura, y);
}
