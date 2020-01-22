#include <iostream>
using namespace std;
int gcd(int,int);
int main(){
  int n,m,result;  
  cout << "叫块M";
  cin >> m;
  cout << "叫块N";
  cin >> n;
  result=gcd(m,n);
  cout << m << "籔" << n << "程そ计单" << result << endl; 
}

int gcd(int m,int n){
  int re;
  if (m == 0) {
    re=n;    
  }else {
    cout << m << "籔" << n << "程そ计讽―" << n%m << "籔" << m << "程そ计 " << endl; 
    re=gcd(n%m,m);      
  }
  return re;
}
