#include <iostream>

int main(){
    int *x, n=10;

    x = new int;
    x[0] = 3;
    std::cout << x[0] << "\n";
    delete x;

    x = new int[n];
    x[1] = 8;
    std::cout << x[1] << "\n";
    delete [] x;

    return 0;
}
