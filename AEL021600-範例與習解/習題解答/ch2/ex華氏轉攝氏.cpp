#include <iostream>
using namespace std;
int main(){
  double C,F;
  cout << "請輸入華氏溫度？";
  cin >> F;
  C=(F-32)/9*5;
  cout << "轉換成攝氏溫度為" << C << endl; 
}
