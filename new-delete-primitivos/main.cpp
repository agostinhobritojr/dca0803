#include <iostream>

int main(){
    int *x, n=5, nl=3, nc=4;
    int **m;

    // aloca array auxiliar
    m = new int* [nl];
    // aloca matriz completa
    m[0] = new int [nl*nc];
    // fixa os ponteiros para as linhas
    for(int i=1 ; i<nl; i++){
        m[i] = m[i-1] + nc;
    }
    m[1][1] = 3;
    // libera matriz completa
    delete [] m[0];
    // libera vetor auxiliar
    delete [] m;

    x = new int;
    *x = 3; // x[0] = 3;
    std::cout << "*x = " << *x << std::endl;
    delete x;

    x = new int [n];
    x[0] = 3; x[1] = 4;
    delete [] x;

    return 0;
}
