#include <iostream>
#include <vector>

int main(){
    std::vector<std::vector<int>>
        m(5, std::vector<int>(4,0));

    m[3][2] = 3;
    for(int i=0; i<m.size(); i++){
        for(int j=0; j<m[0].size(); j++){
            std::cout << m[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}
