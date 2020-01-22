#include <iostream>
using namespace std;
int main(){
  int n,result=1;
  cout << "請輸入一數字？";
  cin >> n;
  for(int i=1;i<=n;i++){
    result=result*i;
  }
  cout << n << "階乘等於" << result << endl;          
}
