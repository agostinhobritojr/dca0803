#include "retangulo.h"
#include <iostream>

Retangulo::Retangulo(){

}

Retangulo::~Retangulo()
{
 std::cout << "destrutor retangulo\n";
}

void Retangulo::draw()
{
  std::cout << "draw Retangulo\n";
}
