#include <iostream>
using namespace std;
int add(int,int);
int diff(int,int);
int main(){
  int (*p)(int,int);
  int result,a=20,b=10;
  p=add;
  cout << "�禡p���a�}��" << &p << endl;
  cout << "�禡p�����e��" << (int*)p << endl;
  cout << "�禡add����}��" << (int*)add << endl;
  result=p(a,b);
  cout << a << "�[" << b << "����" << result <<endl;
  p=diff;
  cout << "�禡p���a�}��" << &p << endl;
  cout << "�禡p�����e��" << (int*)p << endl;
  cout << "�禡diff����}��" << (int*)diff << endl;
  result=p(a,b);
  cout << a << "��" << b << "����" << result <<endl;
}
int add(int x,int y){
  return x+y;
}
int diff(int x,int y){
  return x-y;
}
