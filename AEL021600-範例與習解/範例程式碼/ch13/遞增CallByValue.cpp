#include <iostream>
using namespace std;
void increaseByValue(int);
int main(){
  int a=10;
  increaseByValue(a);
  cout << "a=" << a << endl;
}
void increaseByValue(int x){
  x=x+1;   
}

