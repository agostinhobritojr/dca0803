#include <iostream>
#include "figurageometrica.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"
#include "triangulo.h"
#include <fstream>
#include <string>
#include <vector>

int main(){
    std::ifstream fin;
    std::string s;

    FiguraGeometrica *pfig;
    std::vector<FiguraGeometrica*> figs;

    fin.open("/home/ambj/figuras.txt");
    if(fin.is_open()){
        std::cout << "abriu o arquivo\n";
    }
    else{
        exit(0);
    }

    while(fin.good()){
        fin >> s;
        if(fin.good()){
            std::cout << s << "\n";
            if(s.compare("reta") == 0){
                int x0, y0, x1, y1;
                fin >> x0 >> y0 >> x1 >> y1;
                figs.push_back(new Reta(x0, y0, x1, y1));
            }
            else if(s.compare("circulo") == 0){
                int x, y, raio;
                fin >> x >> y >> raio;
                figs.push_back(new Circulo(x, y, raio));
            }
            else if(s.compare("retangulo") == 0){
                int x0, y0, larg, alt;
                fin >> x0 >> y0 >> larg >> alt;
                figs.push_back(new Retangulo
                               (x0, y0, larg, alt));
            }

        }
    }

    for(int i=0; i<figs.size(); i++){
        figs[i]->draw();
    }

    for(int i=0; i<figs.size(); i++){
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





