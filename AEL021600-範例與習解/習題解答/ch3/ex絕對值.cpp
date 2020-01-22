#include <iostream>
using namespace std;
int main(){
  int num;
  cout << "請輸入一數值：";
  cin >> num;
  if (num < 0){
    cout << "取絕對值為" << -num << endl;
  }else{
    cout << "取絕對值為" << num << endl;     
  }
}
