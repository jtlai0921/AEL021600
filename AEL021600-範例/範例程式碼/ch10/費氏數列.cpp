#include <iostream>
using namespace std;
int F(int);
int main(){
  int k,result;  
  cout << "�п�JK�ȡH";
  cin >> k;
  result=F(k);
  cout << "�O��ƦC��" << k <<"�Ӥ����Ȭ�" << result << endl;  
}

int F(int n){
  int re;
  if ((n == 0) || (n == 1)) {
    re=1;    
  }else {
    re=F(n-1)+F(n-2);      
  }
  cout << "�O��ƦC��" << n <<"�Ӥ����Ȭ�" << re << endl; 
  return re;
}
