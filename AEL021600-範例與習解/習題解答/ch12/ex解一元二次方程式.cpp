#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int a,b,c;
  double x1,x2; 
  cout << "�Ш̧ǿ�JA�BB�PC�H";
  cin >> a>>b>>c;
  if ((b*b-4*a*c) <0){
    cout <<"�L���"<<endl;                
  }else if ((b*b-4*a*c) >0){
    x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    x2=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout << x1 << "�P" << x2 <<endl;      
  }else {
    x1=(-b)/(2*a);
    cout << "����," << x1 <<endl;        
  }   
}
