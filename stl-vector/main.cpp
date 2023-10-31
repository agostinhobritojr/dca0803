#include <iostream>
#include <vector>
#include <algorithm>

int main(){
//    std::vector <int> v(8);
    std::vector <int> v;
    std::vector<int>::iterator it;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    for(it = v.begin(); it!=v.end(); it++){
        std::cout << *it << ", ";
    }
    std::cout << "\n----------\n";

    it = v.begin();
    it++;
    v.insert(it, -1);

    for(it = v.begin(); it!=v.end(); it++){
        std::cout << *it << ", ";
    }
    std::cout << "\n----------\n";

    v.erase(v.begin()+1);
    for(it = v.begin(); it!=v.end(); it++){
        std::cout << *it << ", ";
    }
    std::cout << "\n----------\n";

    it = find(v.begin(), v.end(), 4);
    v.erase(it);
    for(it = v.begin(); it!=v.end(); it++){
        std::cout << *it << ", ";
    }
    std::cout << "\n----------\n";


    v[2] = 8;
 //   v.resize(8);
    v[3] = 10;
    for(int i=0; i<v.size(); i++){
        std::cout << v[i] << ", ";
    }
    std::cout << std::endl;
    v.pop_back();
    for(int i=0; i<v.size(); i++){
        std::cout << v[i] << "," ;
    }
    std::cout << std::endl;
    return 0;
}
