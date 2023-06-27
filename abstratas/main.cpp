#include <iostream>
#include "reta.h"
#include "figurageometrica.h"
#include "circulo.h"
#include "retangulo.h"
#include <vector>
#include <fstream>
#include <string>

int main(){
    std::vector<FiguraGeometrica*> figs;
    FiguraGeometrica *pfig;
    std::ifstream fin;
    std::string s;
    fin.open("/home/ambj/figura.txt");

    while(fin.good()){
        fin >> s;
        if(fin.good()){
            std::cout << s << "\n";
            if(s.compare("circulo") == 0){
                float x0, y0, raio;
                fin >> x0 >> y0 >> raio;
                figs.push_back(new Circulo(x0, y0, raio));
            }
            else if(s.compare("reta") == 0){
                float x0, y0, x1, y1;
                fin >> x0 >> y0 >> x1 >> y1;
                figs.push_back(new Reta(x0, y0, x1, y1));
            }
            else if(s.compare("retangulo") == 0){
                float x0, y0, l, h;
                fin >> x0 >> y0 >> l >> h;
                figs.push_back(new Retangulo(x0, y0, l, h));
            }
        }
    }
    for(int i=0; i<figs.size(); i++){
        figs[i]->draw();
    }


/*    figs.push_back(new Circulo());
    figs.push_back(new Circulo());
    figs.push_back(new Reta());
    figs.push_back(new Retangulo());
    figs.push_back(new Retangulo());

    for(int i=0; i<figs.size(); i++){
        figs[i]->draw();
    }

    for(int i=0; i<figs.size(); i++){
        delete figs[i];
    }

    std::cout << "passou\n";

    Reta r;
    Retangulo rg;
    Circulo c;

    pfig = &r;
    pfig->draw();

    pfig = &c;
    pfig->draw();

    pfig = new Retangulo();
    pfig->draw();

*/
    return 0;
}
