#include <iostream>
using namespace std;
void swapByRef(int &,int &);
int main(){
  int a=10,b=20;
  cout << "&a=" << &a << ",&b=" << &b << endl;
  cout << "�洫�ea=" << a << ",b=" << b << endl;
  swapByRef(a,b);
  cout << "�洫��a=" << a << ",b=" << b << endl;
}
void swapByRef(int &x,int &y){
  int temp;
  cout << "&x=" << &x << ",&y=" << &y << endl;
  temp=x;
  x=y;
  y=temp;   
}
