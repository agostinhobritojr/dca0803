#include <iostream>

int main(){
    int *x, n = 5;
    x = new int;
    *x = 3;
    std::cout << "*x = " << *x << "\n";
    std::cout << "*x = " << x[0] << "\n";
    delete x;

    x = new int[n];
    for(int i=0; i<n; i++){
        x[i] = i+1;
    }
    for(int i=0; i<n; i++){
        std::cout << x[i] << " ";
    }
    std::cout << "\n";
    delete [] x;
    return 0;
}
