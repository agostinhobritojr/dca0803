#include <iostream>
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"
#include "figurageometrica.h"

using namespace std;

int main(){
  Reta r;
  Circulo c;
  Retangulo ret;
  FiguraGeometrica *f;

  Reta *pr;


  f=&r;
  f->draw(); // POLIMORFISMO
  f=&c;
  f->draw();
  f=&ret;
  f->draw();
 f->draw();


//  pr = f;

//  r.draw();  c.draw();  ret.draw();



  return 0;
}
