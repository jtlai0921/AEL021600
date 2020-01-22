#include <iostream>
using namespace std;
int space(int);
int main(){
  int n,result;  
  cout << "請輸入N值？";
  cin >> n;
  result=space(n);
  cout << n <<"平面切割空間最多產生" << result << "空間" << endl;
}
int space(int n){
  int re;
  if (n == 1) {
    re=2;    
  }else {
    re=space(n-1)+(n*n-n+2)/2;      
  }
  cout << n <<"平面切割空間最多產生" << re << "空間" << endl;
  return re;
}
