#include <iostream>
using namespace std;
void increaseByRef(int &);
int main(){
  int a=10;
  increaseByRef(a);
  cout << "&a=" << &a << endl;
  cout << "a=" << a << endl;
}
void increaseByRef(int &x){
  x=x+1;
  cout << "&x=" << &x << endl;   
}
