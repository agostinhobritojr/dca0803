#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <numeric>

int main(){
    std::srand(std::time(0));

    std::vector<int> v(60);
    std::iota(v.begin(), v.end(), 1);
    std::random_shuffle(v.begin(),v.end());
    std::sort(v.begin(), v.begin()+6);

    for(int i=0; i<6; i++){
        std::cout << v[i] << ", ";
    }
    std::cout << std::endl;
    return 0;
}
