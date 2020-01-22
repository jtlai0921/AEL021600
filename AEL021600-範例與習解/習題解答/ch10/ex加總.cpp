#include <iostream>
using namespace std;
int sum(int);
int main(){
  int n,result;  
  cout << "請輸入N值？";
  cin >> n;
  result=sum(n);
  cout << "1加到" << n << "等於" << result << endl;  
}
int sum(int n){
  int re;
  if (n == 1) {
    re=1;    
  }else {
    re=n+sum(n-1);      
  }
  cout << "1加到" << n << "等於" << re << endl;
  return re;
}
