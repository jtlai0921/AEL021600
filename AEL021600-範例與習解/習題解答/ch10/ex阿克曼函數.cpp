#include <iostream>
using namespace std;
int A(int,int);
int main(){
  int m,n,result;  
  cout << "�п�JM�ȡH";
  cin >> m;
  cout << "�п�JN�ȡH";
  cin >> n;
  result=A(m,n);
  cout << "���J�Ҩ��" << m <<"�P" << n << "�N�J���G��" << result << endl; 
}
int A(int m,int n){
  int re;
  if (m == 0) {
    re=n+1;    
  }else if ((m > 0)&&( n== 0)){
    re=A(m-1,1);      
  }else if ((m > 0)&&(n > 0)){
    re=A(m-1,A(m,n-1));      
  }
  cout << "���J�Ҩ��" << m <<"�P" << n << "�N�J���G��" << re << endl; 
  return re;
}
