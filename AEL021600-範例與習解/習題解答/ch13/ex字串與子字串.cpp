#include <iostream>
#include <cstring>
using namespace std;
int str_cmp(char *,char *);
int main(){
  string s;
  char *cstr[5],*substr;
  for(int i=0;i<5;i++){
    cstr[i]=new char[101]; //動態配置101個字元給cstr字元指標陣列
    cout << "請第" << i+1 << "個字串長度不超過100個字元？";
    cin >> s;
    strcpy(cstr[i],s.c_str());  //將C++字串s轉成C語言字串 
  }
  substr=new char[101]; //動態配置101個字元給substr字元指標
  cout << "要搜尋的字串，長度不超過100個字元？";
  cin >> s; 
  strcpy(substr,s.c_str());  //將C++字串s轉成C語言字串  
  for(int i=0;i<5;i++){
    if (strstr(cstr[i],substr) > 0){
      cout << cstr[i] << endl;                           
    }       
  }
  for(int i=0;i<5;i++){
    delete[] cstr[i];   //釋放動態配置記憶體cstr[i]
  }
  delete[] substr;
}
