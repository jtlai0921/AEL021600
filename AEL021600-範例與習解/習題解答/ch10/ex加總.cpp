#include <iostream>
using namespace std;
int sum(int);
int main(){
  int n,result;  
  cout << "�п�JN�ȡH";
  cin >> n;
  result=sum(n);
  cout << "1�[��" << n << "����" << result << endl;  
}
int sum(int n){
  int re;
  if (n == 1) {
    re=1;    
  }else {
    re=n+sum(n-1);      
  }
  cout << "1�[��" << n << "����" << re << endl;
  return re;
}
