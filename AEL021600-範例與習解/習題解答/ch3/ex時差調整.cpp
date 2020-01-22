#include <iostream>
using namespace std;
int main(){
  int tw,us;
  cout  << "請輸入台灣時間：";
  cin >> tw;
  if ((tw-11) < 0){
    cout << "美國時間為" << tw-11+24 <<endl;
  }else{
    cout << "美國時間為" << tw-11 <<endl;    
  }
}
