#include <iostream>
#include <math.h>
using namespace std;
int main(){
  int water;
  cout << "請輸入用水度數？";
  cin >> water; 
  switch (water){
    case 1 ... 10:
      cout  << "水費為" << water*7.35 << endl;
      break;          
    case 11 ... 30:
      cout  << "水費為" << water*9.45*-21 << endl;
      break;      
    case 31 ... 50:
      cout  << "水費為" << water*11.55-84 << endl;
      break;
    default:
      cout  << "水費為" << water*12.075-110.25 << endl;
      break;      
  }
}
