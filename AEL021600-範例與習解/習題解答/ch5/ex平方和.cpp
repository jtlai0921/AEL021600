#include <iostream>
using namespace std;
int main(){
  int n,result=0;
  cout << "請輸入n值？";
  cin >> n;
  for(int i=1;i<=n;i++){
    result=result+i*i;
  }
  cout << "1*1+2*2+...+n*n等於" << result << endl;         
}
