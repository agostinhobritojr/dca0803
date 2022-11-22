#include <iostream>
#include "figurageometrica.h"
#include "reta.h"
#include "circulo.h"
#include "retangulo.h"

int main(){
  FiguraGeometrica *fig[10];
  Reta reta, *testereta;
  Circulo circulo;
  Retangulo retangulo;

// erro!!!
//  testereta = &testefig;

  fig[0] = &reta;
  fig[1] = &circulo;
  fig[2] = &retangulo;

  for(int i=0; i<3; i++){
    fig[i]->draw(); // draw eh OBRIGATORIA
  }

  //  reta.draw();
//  circulo.draw();
//  retangulo.draw();
  return 0;
}
