#include <iostream>
#include "figurageometrica.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"

using namespace std;

int main(){
  FiguraGeometrica fig, *pfig;

  Reta reta(3,4,5,6), *p_reta;
  Retangulo retg(3,4,8,10);
  Circulo circ(3,4,12);

  p_reta = &reta;
  // ponteiros para a subclasse NAO PODEM
  // apontar para objetos da superclasse
//  p_reta = &fig;

  fig.setPos(3,4);

  // ponteiros para SUPERCLASSE podem apontar
  // para objetos da subclasse
  pfig = &fig;
  pfig->draw();

  pfig = &reta;
  pfig->draw();

//  reta.draw();
//  retg.draw();
//  circ.draw();
  return 0;
}



