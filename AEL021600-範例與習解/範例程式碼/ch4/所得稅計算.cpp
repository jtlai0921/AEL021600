#include <iostream>
using namespace std;
int main(){
  int income;
  cout << "�п�J�ұo�b�B�H";
  cin >> income; 
  switch (income){
    case 1 ... 500000:
      cout  << "�ұo�|��" << income*0.05 << endl;
      break;          
    case 500001 ... 1000000:
      cout  << "�ұo�|��" << income*0.1-25000 << endl;
      break;      
    case 1000001 ... 2000000:
      cout  << "�ұo�|��" << income*0.2-125000 << endl;
      break;
    case 2000001 ... 4000000:
      cout  << "�ұo�|��" << income*0.3-325000 << endl;
      break;      
    default:
      cout  << "�ұo�|��" << income*0.4-625000 << endl;
      break;      
  }
}
