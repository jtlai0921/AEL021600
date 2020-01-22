#include <iostream>
using namespace std;
int main(){
  int temp;
  cout << "請輸入體溫？";
  cin >> temp;
  if  (temp < 36)  {
    cout  << "體溫過低" << endl;
  }else if (temp < 38) {
    cout  <<  "體溫正常" << endl;
  }else if (temp < 39) {
    cout  <<  "體溫有點燒" << endl;
  }else {
    cout  << "體溫很燒" << endl;
  }
}
