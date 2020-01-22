#include <iostream>
using namespace std;
double computeArea(double,double);
int main(){
  double a,b,result;
  cout << "請輸入長度？" ;
  cin >> a;
  cout << "請輸入寬度？" ;    
  cin >> b;
  result=computeArea(a,b);
  cout << "面積為" << result << endl; 
}

double  computeArea(double  length , double  wide){
  double  area;
  area=length*wide;
  return  area;
}
