#include <iostream>
using namespace std;
void swapByValue(int,int);
int main(){
  int a=10,b=20;
  swapByValue(a,b);
  cout << "a=" << a << ",b=" << b <<endl;
}
void swapByValue(int x,int y){
  int temp;
  temp=x;
  x=y;
  y=temp;
}
