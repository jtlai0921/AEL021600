#include <iostream>
using namespace std;
int main(){
  int fst,sec,trd,sum;
  float avg;
  cout << "請輸入第一次期中考成績？";
  cin >> fst;
  cout << "請輸入第二次期中考成績？";
  cin >> sec;
  cout << "請輸入期末考成績？";
  cin >> trd;
  sum=fst+sec+trd;
  cout << "總分為" << sum << endl;
  avg=(float)sum/3;
  cout << "平均為" << avg << endl; 
}
