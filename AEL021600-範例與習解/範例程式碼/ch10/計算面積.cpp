#include <iostream>
using namespace std;
double computeArea(double,double);
int main(){
  double a,b,result;
  cout << "�п�J���סH" ;
  cin >> a;
  cout << "�п�J�e�סH" ;    
  cin >> b;
  result=computeArea(a,b);
  cout << "���n��" << result << endl; 
}

double  computeArea(double  length , double  wide){
  double  area;
  area=length*wide;
  return  area;
}
