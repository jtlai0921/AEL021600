#include <iostream>
using namespace std;
int main(){
  double money,interest,r1,r2,r3;
  cout << "請輸入本金？";
  cin >> money;
  cout << "請輸入年利率？";
  cin >> interest;
  r1=money*(1+interest/100);
  cout << "第一年本利和為" << r1 << endl;
  r2=money*(1+interest/100)*(1+interest/100);
  cout << "第二年本利和為" << r2 << endl;
  r3=money*(1+interest/100)*(1+interest/100)*(1+interest/100);
  cout << "第三年本利和為" << r3 << endl; 
}
