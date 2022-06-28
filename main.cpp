// Hoppock, Zachary
// tempatureConversion.cpp
// Convert an inputted Fahrenheit value to Celsius by doing it inside a function
// Version # 1

#include <iostream>
using namespace std;

/**
Convert a value from Fahrenheit to Celsius
@param value_F the Fahrenheit value
@return the Celsius value
*/

double temp_conversion(double value_F)
{
  double value_C = ((value_F - 32) * 5) / 9;
  return value_C;
}

int main()
{
  double value_F;
  cout << "Please enter a Fahrenheit value: ";
  cin >> value_F;

  double value_C = temp_conversion(value_F);
  cout << value_F << " Degrees Fahrenheit is equal to " << value_C << " Degrees Celsius";
  return 0;
}