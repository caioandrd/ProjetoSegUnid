#include "poligono.h"
#include "point.h"
#include<iostream>

using namespace std;

Poligono::Poligono()
{

}

void Poligono::addvertices(float x, float y){
        Point p;
        p.setXY(x,y);
        pol[nvertices] = p;
        nvertices++;

}

int Poligono::qtdvertices()
{
    return nvertices;
}

float Poligono::area()
{
    int i = 0;
    float s1 = 0, s2 = 0;

    for(i = 0; i <(nvertices-1); i++){
        s1 = s1 + (pol[i].getX())*(pol[i+1].getY());
    }
    s1 = s1 + (pol[i].getX())*(pol[0].getY());

    for(i = 0; i<(nvertices-1); i++){
        s2 = s2 + (pol[i].getY())*(pol[i+1].getX());
    }
    s2 = s2+(pol[i].getY())*(pol[0].getX());

    if(s1>s2)
        return ((s1-s2)/2);

    else
        return ((s2-s1)/2);

}

void Poligono::transladap(float a, float b)
{
    for(int i=0; i<nvertices; i++){
        pol[i].setX(pol[i].getX()+a);
        pol[i].setY(pol[i].getY()+b);
    }
}

void Poligono::imprimep()
{
    for(int i = 0; i<nvertices; i++){
        pol[i].imprime();
        cout << "    ";
    }
    cout << endl;
}
