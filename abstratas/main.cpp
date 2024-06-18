#include <iostream>
#include "figurageometrica.h"
#include "cubo.h"
#include "elipse.h"
#include "retangulo.h"
#include <vector>
#include <algorithm>

int main(){
    FiguraGeometrica fig, *pfig;
    Elipse elipse, *pe;
    Retangulo ret;
    Cubo cub;

    std::vector<FiguraGeometrica*> figs;

    figs.push_back(new Elipse);
    figs.push_back(new Retangulo);
    figs.push_back(new Cubo);
    figs.push_back(new Retangulo);
    figs.push_back(new Cubo);
    figs.push_back(new Elipse);
    figs.push_back(new Elipse);

    for(int i=0; i<figs.size(); i++){
        figs[i]->draw();
    }

    std::random_shuffle(figs.begin(), figs.end());
    std::cout << std::endl;

    for(int i=0; i<figs.size(); i++){
        figs[i]->draw();
    }

    for(int i=0; i<figs.size(); i++){
        delete figs[i];
    }

    std::cout << "passou\n";

    //    fig.draw();
//    pfig = &fig;
//    pfig->draw();

//    elipse.draw();
//    pfig = &elipse;
//    pfig->draw();

//   pe = &fig;

//   ret.draw();
//   cub.draw();

    return 0;
}
