#include <iostream>
using namespace std;
int p(int,int);
int main(){
  int n,m,result;  
  cout << "�п�JM�ȡH";
  cin >> m;
  cout << "�п�JN�ȡH";
  cin >> n;
  result=p(m,n);
  cout << m << "��" << n << "���赥��" << result << endl;  
}

int p(int m,int n){
  int re;
  if (n == 1) {
    re=m;    
  }else {
    re=m*p(m,n-1);      
  }
  cout << m << "��" << n << "���赥��" << re << endl; 
  return re;
}
