#include <iostream>
using namespace std;
int main(){
  double weight,height,BMI;
  cout << "�п�J�魫(KG)�H";
  cin >> weight;
  cout << "�п�J�魫(M)�H";
  cin >> height;
  BMI=weight/(height*height);
  cout << "BMI��" << BMI << endl; 
  if  (BMI < 18)  {
    cout  << "�魫�L��" << endl;
  }else if (BMI < 24) {
    cout  << "�魫���`" << endl;
  }else if (BMI < 27) {
    cout  << "�魫�L��" << endl;
  }else {
    cout  << "�魫�έD" << endl;
  }
}
