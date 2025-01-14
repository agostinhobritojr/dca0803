#include "figurageometrica.h"
#include "retangulo.h"
#include "circulo.h"
#include "reta.h"
#include <vector>
#include <fstream>
#include <string>
#include <iostream>

int main(){
    FiguraGeometrica *pfig;
  //  FiguraGeomtrica fig; ERRO! FiguraGeometrica eh abstrata
 //   Retangulo retg, *pretg;
 //   Reta ret;
 //   Circulo circ;

    std::vector<FiguraGeometrica*> figuras;

    std::ifstream fin;
    fin.open("/home/ambj/workspace/dca0803/FiguraGeometrica/figura.txt");
    if(!fin.is_open()){
        exit(0);
    }

    std::string s;

    while(fin.good()){
        fin >> s;
        if(fin.good()){
       //     std::cout << "leu: " << s << std::endl;
            if(s.compare("retangulo") == 0){
                float x1, y1, largura, altura;
                fin >> x1 >> y1 >> largura >> altura;
                figuras.push_back(
                    new Retangulo(x1,y1,largura,altura));
            }
            else if(s.compare("reta") == 0){
                float x1, y1, x2, y2;
                fin >> x1 >> y1 >> x2 >> y2;
                figuras.push_back(
                    new Reta(x1,y1,x2,y2));

            }
            else if(s.compare("circulo") == 0){
                float xc, yc, raio;
                fin >> xc >> yc >> raio;
                figuras.push_back(
                    new Circulo(xc,yc,raio));

            }
        }
    }





/*
    figuras.push_back(new Retangulo(1,2,30,10));
    figuras.push_back(new Circulo(3,4,5));
    figuras.push_back(new Reta(1,2,3,4));
    figuras.push_back(new Circulo(1,-3, 20));
*/
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
