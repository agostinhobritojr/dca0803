#include <iostream>
#include <iostream>
#include <cstring>
#include "motor.h"

int main(void){
    Motor m(140);
    Equipamento e;

    e = m;
    m = e;

    /*    std::cout << "tam = " << sizeof(m) << std::endl;
    m.setFabricante("ACME");
 //   m.setPreco(23.45);
    m.setNome("Speedatron");
    m.setPotencia(130);
    m.setVelocidade(280);
    std::cout << m.getFabricante() << "\n"
              << m.getPreco() << "\n"
              << m.getNome() << "\n"
              << m.getPotencia() << "\n"
              << m.getVelocidade() << "\n";
*/
}
