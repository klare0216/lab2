#include <iostream>
using namespace std;

class BMI{
  public:
    BMI();
    BMI(float h,float m);
    void setHeight(float h);
    void setMass(float m);
    float getBMI();
    string getCategory();

  private:
    float height;
    float mass;
    float bmi;

};
