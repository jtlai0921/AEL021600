#include <iostream>
using namespace std;
int main(){
  int a,b,c;
  cout  << "�п�J�T����a������G";
  cin >> a;
  cout  << "�п�J�T����b������G";
  cin >> b;
  cout  << "�п�J�T����c������G";
  cin >> c;
  if ((a+b>c)&&(a+c>b)&&(b+c>a)){
    cout << "�i�c���T����" <<endl;
  }else{
    cout << "�L�k�c���T����" <<endl;      
  }
}

