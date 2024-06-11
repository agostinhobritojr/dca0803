#include <iostream>
#include <vector>

int main(){
    std::vector<int> v(10,6);
    std::vector<int>::iterator it;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    for(int i=0; i< v.size(); i++){
        std::cout << v[i] << ", ";
    }
    std::cout << std::endl;
    v.pop_back();
  //  v.resize(21);
  //  v[20] = 90;
    v.insert(v.begin()+3, -1);
    for(it=v.begin(); it!=v.end(); it++){
        std::cout << *it << ", ";
    }
    std::cout << std::endl;

    v.erase(v.end()-2);
    for(it=v.begin(); it!=v.end(); it++){
        std::cout << *it << ", ";
    }
    std::cout << std::endl;
    return 0;
}
