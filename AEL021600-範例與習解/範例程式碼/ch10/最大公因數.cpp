#include <iostream>
using namespace std;
int gcd(int,int);
int main(){
  int n,m,result;  
  cout << "�п�JM�ȡH";
  cin >> m;
  cout << "�п�JN�ȡH";
  cin >> n;
  result=gcd(m,n);
  cout << m << "�P" << n << "���̤j���]�Ƶ���" << result << endl; 
}

int gcd(int m,int n){
  int re;
  if (m == 0) {
    re=n;    
  }else {
    cout << m << "�P" << n << "���̤j���]�Ƭ۷��D" << n%m << "�P" << m << "���̤j���]�� " << endl; 
    re=gcd(n%m,m);      
  }
  return re;
}
