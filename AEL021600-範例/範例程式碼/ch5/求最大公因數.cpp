#include <iostream>
using namespace std;
int main(){
  int A,B,R;
  cout << "�п�J�Ĥ@��A�H";
  cin >> A;
  cout << "�п�J�ĤG��B�H";
  cin >> B;
  do{
     cout << A << "�P" << B << "���̤j���]�Ƭ۷��D";
     R=A%B; 
     A=B;
     B=R; 
     cout << A << "�P" << B << "���̤j���]��"  << endl; 
  }while(R != 0);
  cout << A << "���̤j���]��" << endl;  
}
