#include <iostream>
using namespace std;
int main(){
  int acc=123,pass=0000,a,p;
  do {
    cout << "�п�J�b���H"; 
    cin >> a;      
    cout << "�п�J�K�X�H";
    cin >> p;
    if ((a == acc) && (p == pass)){
      cout << "�b���P�K�X���T" << endl; 
      break;      
    } else {
      cout << "�n�J����" << endl;       
    }     
  }while (1);
}
