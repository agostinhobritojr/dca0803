#include <iostream>
#include "figurageometrica.h"
#include "reta.h"
#include "circulo.h"
#include "retangulo.h"

int main(){
  FiguraGeometrica *fig[10];
//  Reta reta;
//  Circulo circulo;
//  Retangulo retangulo;

// erro!!!
//  testereta = &testefig;

  //  fig[0] = &reta;
  //  fig[1] = &circulo;
  //  fig[2] = &retangulo;

  // guardar no array figs 5 elementos alocados
  // DINAMICAMENTE
  // 2 retas
  // 2 circulos
  // 1 retangulo
  fig[0] = new Reta;
  fig[1] = new Reta;
  fig[2] = new Circulo;
  fig[3] = new Circulo;
  fig[4] = new Retangulo;

  for(int i=0; i<5; i++){
    fig[i]->draw(); // draw eh OBRIGATORIA
  }

  for(int i=0; i<5; i++){
    delete fig[i];
  }
  //  reta.draw();
//  circulo.draw();
//  retangulo.draw();
  return 0;
}
