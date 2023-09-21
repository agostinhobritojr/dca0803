#include <iostream>
#include <cmath> // matematica

class Vetor2d{
private:
    float y;
    float x;
public:
    void setX(float x_){
        x = x_;
    }
    float getX(){
        return x;
    }
    void setY(float y_){
        y = y_;
    }
    float getY(){
        return y;
    }
    void print(){
        std::cout << "(" << x << "," << y << ")\n";
    }
    float norma(){
        return std::sqrt(x*x+y*y);
    }
    float angulo(){
        return 180/3.1415*std::atan2(y,x);
    }
    Vetor2d unitario(void){
        Vetor2d ret;
        ret.x = x/norma();
        ret.y = y/norma();
        return ret;
    }
};
int main(void){
    // v eh um objeto da classe Vetor2d
    Vetor2d v, v2, un;
   // v.x = 3;
    v.setX(3);  v.setY(4);
    v.print(); // (3,4)
    std::cout << "norma  = " << v.norma() << "\n";
    std::cout << "angulo = " << v.angulo() << "\n";
    un = v.unitario();
    un.print();
    v2 = v;
    v2.print();
}



