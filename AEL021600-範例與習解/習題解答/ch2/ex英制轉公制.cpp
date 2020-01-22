#include <iostream>
using namespace std;
int main(){
  int x,y;
  float cm;
  cout << "請輸入幾尺？";
  cin >> x;
  cout << "請輸入幾吋？";
  cin >> y;
  cm=(x*12+y)*2.54;
  cout << "轉換為公分，身高為" << cm << endl;
}
