#include <iostream>
using namespace std;
int C(int,int);
int main(){
  int m,n,result;  
  cout << "�п�JM�ȡH";
  cin >> m;
  cout << "�п�JN�ȡH";
  cin >> n;
  result=C(m,n);
  cout << "��" << m <<"��" << n << "���զX�Ʀ�" << result << "��" << endl; 
}

int C(int m,int n){
  int re;
  if ((n == 0) || (n == m)) {
    re=1;    
  }else {
    re=C(m-1,n)+C(m-1,n-1);      
  }
  cout << "��" << m <<"��" << n << "���զX�Ʀ�" << re << "��" << endl;  
  return re;
}
