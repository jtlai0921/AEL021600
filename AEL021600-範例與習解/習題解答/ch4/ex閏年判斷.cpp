#include <iostream>
using namespace std;
int main(){
  int year;
  cout << "請輸入年份？";
  cin >> year;
  if  ((year%4)!=0)  {
    cout  << year << "不是閏年" << endl;
  }else if ((year%400) == 0) {
    cout  << year << "是閏年" << endl;
  }else if ((year%100) == 0) {
    cout  << year << "不是閏年" << endl;
  }else {
    cout  << year << "是閏年" << endl;
  } 
}
