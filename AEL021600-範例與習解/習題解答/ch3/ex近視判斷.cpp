#include <iostream>
using namespace std;
int main(){
  double eye;
  cout << "請輸入一數值：";
  cin >> eye;
  if (eye < 0.9){
    cout << "近視" << endl;
  }else{
    cout << "視力正常" << endl;     
  }
}
