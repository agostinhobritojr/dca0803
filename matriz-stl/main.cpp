#include <iostream>
#include <vector>

int main(){
    int nl=5, nc=6;

    std::vector<std::vector<int>>
        m(nl, std::vector<int>(nc, 0));

    m[3][5] = -1;
    for(int i=0; i<m.size(); i++){
        for(int j=0; j<m[i].size(); j++){
            std::cout << m[i][j] << ", ";
        }
        std::cout << std::endl;
    }
    return 0;
}
