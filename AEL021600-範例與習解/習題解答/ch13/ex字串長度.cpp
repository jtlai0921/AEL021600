#include <iostream>
#include <cstring>
using namespace std;
int main(){
  string s;
  char *cstr;
  int len=0;
  cstr=new char[101]; //動態配置101個字元給cstr字元指標 
  cout << "請字串長度不超過100個字元？";
  cin >> s;
  strcpy(cstr,s.c_str());  //將C++字串s轉成C語言字串 
  while (*(cstr+len) != '\0'){  //'\0'表示C語言字串結束 
    len=len+1;   //若不是'\0'則長度len加1     
  }
  cout << "字串" << s <<"的長度為" << len << endl;
  delete[] cstr;   //釋放動態配置記憶體cstr 
}

