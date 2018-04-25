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

   cout << "Ponto  P: "; p.imprime(); cout << endl;
   cout << "Ponto  P1: "; p1.imprime(); cout << endl;
   p2 = p.add(p1);
   cout << "Ponto  P + P1: "; p2.imprime(); cout << endl;
   p3 = p.sub(p1);
   cout << "Ponto  P - P1: "; p3.imprime(); cout << endl;
   cout << "Norma ponto P: "; cout << p.norma(); cout << endl;
   t = p.translada(5,6);
   cout << "Ponto P transladado de (5,6): ";
   t.imprime(); cout << endl << endl;

   pol.addvertices(0,0);
   pol.addvertices(2,1);
   pol.addvertices(1,3);
   pol.addvertices(-2,2);
   pol.addvertices(-1,1);
   pol.imprimep();
   cout << "Quantidade de vertices do poligono: " << pol.qtdvertices() << endl;
   cout << "Area do poligono: " << pol.area() << endl;
   cout << "Poligono  transladado de (5,6): ";
   pol.transladap(5,6);
   pol.imprimep(); cout << endl << endl;

   ret.imprimep();
   cout << "Area do retangulo: " << ret.area() << endl;
   ret.transladap(-3,4);
   cout << "Retangulo transladado de (-3,4): ";
   ret.imprimep();
   cout << "Area transladada: " << ret.area(); cout << endl << endl;
  }
