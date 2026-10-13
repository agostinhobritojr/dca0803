#include <iostream>

class Alo{
  int a;
public:
  // Alo x;
  // px = new Alo;
  Alo(){
    std::cout << "Construtor padrao\n";
  }
  // Alo x(3);
  // px = new Alo(3);
  Alo(int a){
    std::cout << "Construtor com argumentos\n";
    this->a = a;
  }
  ~Alo(){
    std::cout << "Destrutor\n";
  }
  void setA(int a){
    this->a = a;
  }
  void print(void){
    std::cout << "print(" << a << ")\n";
  }
};

int main (){
  /*
  int *x;
  // aloca UM UNICO ELEMENTO DO TIPO
  // FORNECIDO
  x = new int;
  *x = 3;
  x[0] = 3;
  std::cout << "*x = " << *x << "\n";
  delete x;

  // blocos de elementos sao tratados
  // com new[] e delete[]
  int n=10;
  x = new int[n];
  x[3] = 8;
  delete [] x;
*/

         // alocacao dinamica de objeto de uma classe
  Alo *a;
  // alocacao de um unico elemento
  a = new Alo;
  a->setA(38);
  a->print();
  delete a;
  // invocando alocacao com construtor com argumentos
  a = new Alo(35);
  a->print();
  delete a;

  // alocando mais de um elemento
  a = new Alo[5];
  a[2].print();
  delete [] a;

  return 0;
}




