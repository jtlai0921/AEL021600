#include <iostream>
using namespace std;
int space(int);
int main(){
  int n,result;  
  cout << "�п�JN�ȡH";
  cin >> n;
  result=space(n);
  cout << n <<"�������ΪŶ��̦h����" << result << "�Ŷ�" << endl;
}
int space(int n){
  int re;
  if (n == 1) {
    re=2;    
  }else {
    re=space(n-1)+(n*n-n+2)/2;      
  }
  cout << n <<"�������ΪŶ��̦h����" << re << "�Ŷ�" << endl;
  return re;
}
