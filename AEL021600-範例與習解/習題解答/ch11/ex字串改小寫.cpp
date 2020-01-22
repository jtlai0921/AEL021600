#include <iostream>
using namespace std;
int main(){
  string s;
  cin >> s;
  for(int i=0;i<s.length();i++){  //取出每個元素 
    if ((s.at(i)>=65) && (s.at(i)<=90)){ //根據ASCII大寫字母介於65到90 
      s.at(i)=tolower(s.at(i));  //轉成小寫 
    }        
  }
  cout << s;  
}

