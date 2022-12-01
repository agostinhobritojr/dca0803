#include <iostream>
#include <vector>

int main(){
  std::vector<int> v;
  std::vector<int>::iterator it;
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
  for(it = v.begin(); it!=v.end(); it++){
    std::cout << *it << ", ";
  }
  std::cout << std::endl;
  v.erase(v.begin()+1);
  v.insert(v.begin()+1,4);
//  v.resize(40);
//  v[30] = 3;
//  v.pop_back();
  for(int i=0; i<v.size(); i++){
    std::cout << v[i] << ", ";
  }
  std::cout << std::endl;
  return 0;
}
