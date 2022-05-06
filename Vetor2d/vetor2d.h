#ifndef VETOR2D_H
#define VETOR2D_H

class Vetor2d{
private:
  float x,y;
public:
  void setX(float x_);
  float getX();
  void setY(float y_);
  float getY();
  void print();
  Vetor2d produto(float a); //
  float angulo();
  //float produto(Vetor2d v2); Sobrecarga de metodo
};

#endif // VETOR2D_H
