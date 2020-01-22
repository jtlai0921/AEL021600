#include <iostream>
using namespace std;
int main(){
  int num,cost;
  cout << "請輸入購買飲料的罐數？";
  cin >> num;
  cost=(num/12)*200+(num%12)*20;
  cout << "需花費" << cost << endl; 
}
