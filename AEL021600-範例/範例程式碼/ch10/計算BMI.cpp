#include <iostream>
using namespace std;
double BMI(double,double);
int main(){
  double w,h,bmi;  
  cout << "�п�J�魫(KG)�H";
  cin >> w;
  cout << "�п�J����(M)�H";
  cin >> h;   
  bmi=BMI(w,h);
  cout << "BMI=" << bmi << endl;
  if (bmi < 18){
    cout << "�魫�L��" << endl;        
  }else if (bmi < 24){
    cout << "�魫���`" << endl;    
  }else if (bmi < 27){
    cout << "�魫�L��" << endl;      
  }else {
    cout << "�魫�έD" << endl;   
  } 
}

double BMI(double weight,double height){
  double result;
  result=weight/(height*height);
  return result;
}
