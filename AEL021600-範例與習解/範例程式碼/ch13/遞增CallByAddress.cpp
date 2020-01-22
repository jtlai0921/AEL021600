#include <iostream>
using namespace std;
void increaseByAddress(int *);
int main(){
  int a=10;
  increaseByAddress(&a);
  cout << "a=" << a <<endl;
}
void increaseByAddress(int *x){
  *x=*x+1;   
}
