#include <fstream>
#include "BMI.h"
using namespace std;

int main()
{
  BMI bmi(-1.6,51.0); 
  cout << bmi.getBMI() << " " << bmi.getCategory() << endl;
  return 0;
}
