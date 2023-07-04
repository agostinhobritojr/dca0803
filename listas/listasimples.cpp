#include <forward_list>
#include <iostream>
#include <algorithm>

int main(void){
  std::forward_list<int> lista;
  std::forward_list<int>::iterator it;
  lista.push_front(10);
  lista.push_front(8);
  lista.push_front(9);
  lista.push_front(21);

  for(auto i: lista){ // C++11
    std::cout << i << " ";
  }
  std::cout << std::endl;

  it = std::find(lista.begin(), lista.end(), 9);
  lista.insert_after(it, 7);

  for(it = lista.begin(); it != lista.end(); it++){
    std::cout << *it << " ";
  }
  std::cout << std::endl;

  it = std::find(lista.begin(), lista.end(), 9);
  lista.erase_after(it);
  for(it = lista.begin(); it != lista.end(); it++){
    std::cout << *it << " ";
  }
  std::cout << std::endl;

/*  for(int i=0; i<lista.size(); i++){
    std::cout << lista[i] << " ";
  }*/
}
