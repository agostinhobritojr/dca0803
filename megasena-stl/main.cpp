#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <numeric>
#include <algorithm>
#include <iomanip>

int main(){
    std::vector<int> v(60);

    std::srand(std::time(0));
    std::iota(v.begin(), v.end(), 1);
    for(int i=0; i<20; i++){
        std::random_shuffle(v.begin(),  v.end());
        std::sort(v.begin(), v.begin()+6);
        for(int j=0; j<6; j++){
            std::cout << std::setw(2) << v[j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    //std::srand(std::time(0));
    //std::cout << std::rand()%60+1 << std::endl;
    return 0;
}
