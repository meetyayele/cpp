#include <iostream>
using namespace std;

int main() {

  double tempf;
  double tempc;

  cout << "Enter the temperature in Fahrenheit:";
  // Ask the user
  cin >> tempf;\



  tempc = (tempf - 32) / 1.8;

  cout << "The temp is " << tempc << " degrees Celsius.\n";

}
