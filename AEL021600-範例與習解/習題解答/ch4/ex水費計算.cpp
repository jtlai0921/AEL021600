#include <iostream>
#include <math.h>
using namespace std;
int main(){
  int water;
  cout << "�п�J�Τ��׼ơH";
  cin >> water; 
  switch (water){
    case 1 ... 10:
      cout  << "���O��" << water*7.35 << endl;
      break;          
    case 11 ... 30:
      cout  << "���O��" << water*9.45*-21 << endl;
      break;      
    case 31 ... 50:
      cout  << "���O��" << water*11.55-84 << endl;
      break;
    default:
      cout  << "���O��" << water*12.075-110.25 << endl;
      break;      
  }
}
