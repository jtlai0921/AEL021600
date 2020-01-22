#include <iostream>
using namespace std;
int A(int,int);
int main(){
  int m,n,result;  
  cout << "請輸入M值？";
  cin >> m;
  cout << "請輸入N值？";
  cin >> n;
  result=A(m,n);
  cout << "阿克曼函數" << m <<"與" << n << "代入結果為" << result << endl; 
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
  cout << "阿克曼函數" << m <<"與" << n << "代入結果為" << re << endl; 
  return re;
}
