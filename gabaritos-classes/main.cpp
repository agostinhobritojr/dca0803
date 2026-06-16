#include <iostream>

template <typename T>
class Alo{
    T a;
public:
    Alo(){
    }
    void setA(T a_){
        a = a_;
    }
    T getA(void){
        return a;
    }
};

int main(){
    Alo<int> aint;
    Alo<float> afloat;

    aint.setA(3.5);
    std::cout << aint.getA() << "\n";

    afloat.setA(3.5);
    std::cout << afloat.getA() << "\n";
    return 0;
}






