#include <iostream>
using namespace std;
int main(){
  int *p,x=1,y=2;
  cout << "x=" << x <<"�A&x=" << &x << endl;
  cout << "y=" << y << "�A&y=" << &y << endl;
  p=&x;
  cout << "����p=&x��Ap=" << p << endl;
  cout << "*p=" << *p << endl; 
  p=&y;
  cout << "����p=&y��Ap=" << p << endl;
  cout << "*p=" << *p << endl;   
}
