#include <iostream>
using namespace std;
int f(int);
int main(){
  int n,result;  
  cout << "�п�JN�ȡH";
  cin >> n;
  result=f(n);
  cout << n << "��������" << result << endl;  
}

int f(int n){
  int re;
  if (n == 1) {
    re=1;    
  }else {
    re=n*f(n-1);      
  }
  cout << n << "��������" << re << endl;
  return re;
}
