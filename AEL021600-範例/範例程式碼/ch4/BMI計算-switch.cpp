#include <iostream>
#include <math.h>
using namespace std;
int main(){
  double weight,height,BMI;
  int iBMI;
  cout << "請輸入體重(KG)？";
  cin >> weight;
  cout << "請輸入身高(M)？";
  cin >> height;
  BMI=weight/(height*height);
  cout << "BMI為" << BMI << endl;
  iBMI=floor(BMI); 
  switch (iBMI){
    case 1 ... 17:
      cout  << "體重過輕" << endl;
      break;          
    case 18 ... 23:
      cout  << "體重正常" << endl;
      break;      
    case 24 ... 26:
      cout  << "體重過重" << endl;
      break;
    default:
      cout  << "體重肥胖" << endl;
      break;      
  }
}
