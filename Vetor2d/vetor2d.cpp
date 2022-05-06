#include "vetor2d.h"
#include<iostream> //para o print
#include<cmath> // para o angulo

void Vetor2d::setX(float x_){
  x = x_;
}

float Vetor2d::getX(){
  return x;
}

void Vetor2d::setY(float y_){
  y = y_;
}

float Vetor2d::getY(){
  return y;
}

void Vetor2d::print(){
    std::cout << "(" << x << "," << y << ")"; // Método print 1)
}

float Vetor2d::angulo(){
    float ang;
    ang = std::atan2(y,x);
    return(ang * 180/3.14); // Método angulo() 2) M_PI
}

Vetor2d Vetor2d::produto(float a){
    Vetor2d ret;
    ret.x = x * a;
    ret.y = y * a;
    return ret;  //Vetor2d produto (float a) 3)
}

//usar os métodos na função principal
