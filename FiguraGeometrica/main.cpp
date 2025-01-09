#include "figurageometrica.h"
#include "retangulo.h"
#include "circulo.h"
#include "reta.h"
#include "retaderivada.h"
#include <vector>

int main(){
    FiguraGeometrica *pfig;
  //  FiguraGeomtrica fig; ERRO! FiguraGeometrica eh abstrata
 //   Retangulo retg, *pretg;
 //   Reta ret;
 //   Circulo circ;

    std::vector<FiguraGeometrica*> figuras;

    figuras.push_back(new Retangulo);
    figuras.push_back(new Circulo);
    figuras.push_back(new Reta);
    figuras.push_back(new Circulo);

    for(int i=0; i<figuras.size(); i++){
        figuras[i]->draw();
    }

    for(int i=0; i<figuras.size(); i++){
        delete figuras[i];
    }







 /*
    pfig = new Retangulo;
    pfig->draw();


//    pretg = &fig; ERRO!
/*
    pfig = &retg;
    pfig->draw();
//    pfig->alo(); ERRO!

    pfig = &fig;
    pfig->draw();

    pfig = &circ;
    pfig->draw();

    fig.draw();
    retg.draw();
    ret.draw();
    circ.draw();
*/
    return 0;
}
