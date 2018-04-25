#include <iostream>
#include "point.h"
#include "poligono.h"
#include "retangulo.h"

using namespace std;

int main()
{
   Point p(-11,2), p1(3,4), p2, p3, t;
   Poligono pol;
   Retangulo ret(0,0,4,3);
   float a = 5;
   float b = 6;
   float c = -3;
   float d = 4;

   cout << "Ponto  P: "; p.imprime(); cout << endl;
   cout << "Ponto  P1: "; p1.imprime(); cout << endl;
   p2 = p.add(p1);
   cout << "Ponto  P + P1: "; p2.imprime(); cout << endl;
   p3 = p.sub(p1);
   cout << "Ponto  P - P1: "; p3.imprime(); cout << endl;
   cout << "Norma ponto P: "; cout << p.norma(); cout << endl;
   t = p.translada(a,b);
   cout << "Ponto P transladado de (" <<
           a << "," << b << "): "; t.imprime(); cout << endl << endl;

   ret.imprimep();
   cout << "Area do retangulo: " << ret.area() << endl << endl;
   ret.transladap(c,d);
      cout << "Retangulo transladado de (" <<
           c << "," << d << "): "; ret.imprimep();
   cout << "Area transladada: " << ret.area(); cout << endl;
  }
