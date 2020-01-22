#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int a,b,c;
  double x1,x2; 
  cout << "請依序輸入A、B與C？";
  cin >> a>>b>>c;
  if ((b*b-4*a*c) <0){
    cout <<"無實根"<<endl;                
  }else if ((b*b-4*a*c) >0){
    x1=(-b+sqrt(b*b-4*a*c))/(2*a);
    x2=(-b-sqrt(b*b-4*a*c))/(2*a);
    cout << x1 << "與" << x2 <<endl;      
  }else {
    x1=(-b)/(2*a);
    cout << "重根," << x1 <<endl;        
  }   
}
