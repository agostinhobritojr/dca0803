#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> v;
    std::vector<int>::iterator it;
    v.push_back(3);
    v.push_back(4);
    v.push_back(3);
    v.push_back(5);
    v.push_back(10);
    v.push_back(2);

    for(it = v.begin(); it!=v.end(); it++){
        std::cout << *it << ", ";
    }
    std::cout << "\n";


    for(int i=0; i<v.size(); i++){
        std::cout << v[i] << ", ";
    }
    std::cout << "\n";
    v.pop_back();

    for(auto i : v){
        std::cout << i << ", ";
    }
    std::cout << "\n";
    return 0;
}
