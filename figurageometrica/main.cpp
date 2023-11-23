#include <iostream>
#include "figurageometrica.h"
#include "retangulo.h"
#include "circulo.h"
#include "reta.h"
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>

int main(){
    FiguraGeometrica *pfig;
    Retangulo ret, *pret;
    Circulo circ;
    std::vector<FiguraGeometrica*> figs;
    std::ifstream fin;

    fin.open("/home/ambj/tmp/figuras.txt");

    if(!fin.is_open()){
        return 0;
    }

    std::string s;
    while(fin.good()){
        fin >> s;
        if(fin.good()){
            if(s.compare("reta") == 0){
                int x0, y0, x1, y1;
                fin >> x0 >> y0 >> x1 >> y1;
                figs.push_back(new Reta(x0, y0, x1, y1));
            }
            else if(s.compare("retangulo") == 0){
                figs.push_back(new Retangulo);
            }
            else if(s.compare("circulo") == 0){
                figs.push_back(new Circulo);
            }
       }
    }


    for(int i=0; i<figs.size(); i++){
        figs[i]->draw();
    }
   // std::random_shuffle(figs.begin(), figs.end());
  //  std::cout << std::endl;

  //  for(int i=0; i<figs.size(); i++){
 //       figs[i]->draw();
 //   }

    for(int i=0; i<figs.size(); i++){
        delete figs[i];
    }
    std::cout << "fim!\n";
/*
    pfig = new Reta();
    pfig->draw();
    delete pfig;

//    fig.draw();
    ret.draw();

    pfig = &circ;
    pfig->draw();

//    pfig = &fig;
//    pfig->draw();

    // eh possivel que um ponteiro para a superclasse
    // aponte para um objeto da subclasse
    pfig = &ret;
    pfig->draw();

    // nao eh possivel ponteiros da subclasse apontarem
    // para objetos da superclasse
    // pret = &fig;
*/
    return 0;
}



