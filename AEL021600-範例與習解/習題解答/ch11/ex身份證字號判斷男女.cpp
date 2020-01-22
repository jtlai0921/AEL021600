#include <iostream>
#include <string>
using namespace std;
int main(){
  string str;
  cin >> str;
  if (str.at(1) == '1') {
    cout << "男生" << endl;
  }else {
    cout << "女生" << endl;    
  }
}
