#include <iostream>
#include <math.h>
using namespace std;
int main(){
  double weight,height,BMI;
  int iBMI;
  cout << "�п�J�魫(KG)�H";
  cin >> weight;
  cout << "�п�J����(M)�H";
  cin >> height;
  BMI=weight/(height*height);
  cout << "BMI��" << BMI << endl;
  iBMI=floor(BMI); 
  switch (iBMI){
    case 1 ... 17:
      cout  << "�魫�L��" << endl;
      break;          
    case 18 ... 23:
      cout  << "�魫���`" << endl;
      break;      
    case 24 ... 26:
      cout  << "�魫�L��" << endl;
      break;
    default:
      cout  << "�魫�έD" << endl;
      break;      
  }
}
