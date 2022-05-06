#include <iostream>
#include "vetor2d.h"

int main(void){
  Vetor2d v,v2;
  //v.x = 3; -> //produto()
  v.setX(3); v.setY(4);
  v.print(); std::cout << "\n" ;
  std::cout << "ang = " << v.angulo() << "\n";
  v2 = v.produto(2);
  v2.print(); std::cout << "\n";
}

//implementação
//1) Void print(); //v.print() (3,4)

//2) float angulo();

//3)vetor2d produto(float a)
