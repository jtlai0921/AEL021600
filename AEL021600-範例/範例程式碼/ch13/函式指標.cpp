#include <iostream>
using namespace std;
int add(int,int);
int diff(int,int);
int main(){
  int (*p)(int,int);
  int result,a=20,b=10;
  p=add;
  cout << "函式p的地址為" << &p << endl;
  cout << "函式p的內容為" << (int*)p << endl;
  cout << "函式add的位址為" << (int*)add << endl;
  result=p(a,b);
  cout << a << "加" << b << "等於" << result <<endl;
  p=diff;
  cout << "函式p的地址為" << &p << endl;
  cout << "函式p的內容為" << (int*)p << endl;
  cout << "函式diff的位址為" << (int*)diff << endl;
  result=p(a,b);
  cout << a << "減" << b << "等於" << result <<endl;
}
int add(int x,int y){
  return x+y;
}
int diff(int x,int y){
  return x-y;
}
