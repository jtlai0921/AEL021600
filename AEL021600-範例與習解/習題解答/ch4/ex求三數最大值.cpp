#include <iostream>
using namespace std;
int main(){
  int A,B,C;
  cout << "�п�JA�ȡH";
  cin >> A;
  cout << "�п�JB�ȡH";
  cin >> B;
  cout << "�п�JC�ȡH";
  cin >> C;
  if  (A > B)  {
    if (A > C) {
      cout  << "A=" << A <<"���̤j��" << endl;
    } else {
      cout  << "C=" << C <<"���̤j��" << endl;       
    }  
  }else {
    if (B > C) {
      cout  << "B=" << B <<"���̤j��" << endl; 
    }else  {
      cout  << "C=" << C <<"���̤j��" << endl;
    }
  }
}
