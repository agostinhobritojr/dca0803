#include <iostream>
#include "figurageometrica.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"
#include "triangulo.h"

int main(){
    FiguraGeometrica *pfig;
    FiguraGeometrica *figs[10];

    figs[0] = new Reta;
    figs[1] = new Retangulo;
    figs[2] = new Circulo;
    figs[3] = new Reta;
    figs[4] = new Retangulo;

    for(int i=0; i<5; i++){
        figs[i]->draw();
    }

    for(int i=0; i<5; i++){
        delete figs[i];
    }

    std::cout << "fim\n";







/*
    Reta reta, *preta;
    Retangulo retangulo;
    Circulo circulo;
    Triangulo triangulo;
    triangulo.draw();
*/

//    preta = &fig;

//    fig.draw();
//    pfig = &fig;
//    pfig->draw();

/*    pfig = &reta;
    pfig->draw();
    pfig = &circulo;
    pfig->draw();
    pfig = &retangulo;
    pfig->draw();
*/
//    std::cout << "\n\n";
 //   reta.draw();
 //   retangulo.draw();
 //   circulo.draw();

    return 0;
}





