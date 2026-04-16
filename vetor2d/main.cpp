#include <iostream>

class Vetor2d{
private:
    float x;
    float y;
public:
    void setX(float x_){
        // caso deseje limitar os valores para x>=0
        if(x_ >= 0){
            x = x_;
        }
    }
    void setY(float y_){
        y = y_;
    }
    float getX(){
        return x;
    }
    float getY(){
        return y;
    }
    void print(){
        std::cout << "(" << x << "," << y << ")";
    }
};

int main(void){
    Vetor2d v;
    float a;
//     v.x = 4;
    v.setX(3);
    std::cout << "v = ";
    v.print();
    std::cout << "\n";


    a = v.getX();
    std::cout << "a = " << a << "\n";
}





