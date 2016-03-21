#include "BMI.h"

BMI::BMI()
{
  setHeight(0);
  setMass(0);
  getBMI();
}

BMI::BMI(float h,float m)
{
  setHeight(h);
  setMass(m);
  getBMI();
}

void BMI::setHeight(float h)
{
  if (h <= 0)
  {
    cout << "input height error" << endl;
    height = 1.0;
  }else {
    height = h;
  }
}

void BMI::setMass(float m)
{
  if (m <= 0)
  {
    cout << "input mass error" << endl;
    mass = 1.0;
  }else {
    mass = m;
  }
}

float BMI::getBMI()
{
  return bmi = mass/(height*height);
}

string BMI::getCategory()
{
  getBMI();
  if (bmi < 15.0) return "Very severely underweight";
  else if (bmi >= 15.0 && bmi < 16.0) return "Severely underweight";
  else if (bmi >= 16.0 && bmi < 18.5) return "Underweight";
  else if (bmi >= 18.5 && bmi < 25.0) return "Normal";
  else if (bmi >= 25.0 && bmi < 30.0) return "Overweight";
  else if (bmi >= 30.0 && bmi < 35.0) return "Obese Class I (Moderately obese)";
  else if (bmi >= 35.0 && bmi < 40.0) return "Obese Class II (Severely obese)";
  else return "Obese Class III (Very severely obese)";
}
