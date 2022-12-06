#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){
  int m=3, n=4;
  // vector<int> v(4,5); vetor com 4 elementos iguais
  // ao valor 5
  std::vector<std::vector<int>>
      v(m, std::vector<int>(n,0));

  for(int i=0; i<v.size(); i++){
    std::iota(v[i].begin(), v[i].end(), 1);
  }

  for(int i=0; i<v.size(); i++){
    for(int j=0; j<v[0].size(); j++){
      std::cout << v[i][j] << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}
