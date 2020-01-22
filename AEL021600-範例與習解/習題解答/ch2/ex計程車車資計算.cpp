#include <iostream>
using namespace std;
int main(){
  double dist;
  int money;
  cout << "請輸入里程數？";
  cin >> dist;
  money=(int)((dist-1.25)/0.25)*5+70;
  cout << "所需車資為" << money << endl; 
}
