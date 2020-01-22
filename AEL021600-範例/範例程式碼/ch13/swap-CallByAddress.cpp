#include <iostream>
using namespace std;
void swapByAddress(int *,int *);
int main(){
  int a=10,b=20;
  swapByAddress(&a,&b);
  cout << "a=" << a << ",b=" << b << endl;
}
void swapByAddress(int *x,int *y){
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}
