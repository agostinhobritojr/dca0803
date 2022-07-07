#include <iostream>
#include <vector>

int main(){
  std::vector<int> v;
  std::vector<int>::iterator it;
  v.push_back(3);
  v.push_back(5);
  v.push_back(8);
  for(int i=0; i<v.size(); i++){
    std::cout << v[i] << " ";
  }
  std::cout << std::endl;
//  v.pop_back();
  v.erase(v.begin()+1);
  v.insert(v.begin()+1, 7);
  for(it=v.begin(); it!=v.end(); it++){
    std::cout << *it << " ";
  }
  std::cout << std::endl;
  return 0;
}
