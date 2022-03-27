#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double hours_worked;
  double wage;
  double totalpay;
  
  cout << "Enter the number of worked: ";
  cin >> hours_worked;
  cout << "Enter the Wage in dollars: ";
  cin >> wage;
  if (hours_worked>40)
      (totalpay=(40*wage)+((hours_worked-40)*(1.5*wage)));
    else 
      (totalpay=hours_worked*wage);
  cout << fixed<< setprecision(2)<<"The total pay is $" <<totalpay<<endl; 
return 0;
}