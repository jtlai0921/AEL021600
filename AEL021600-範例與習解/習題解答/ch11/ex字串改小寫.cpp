#include <iostream>
using namespace std;
int main(){
  string s;
  cin >> s;
  for(int i=0;i<s.length();i++){  //���X�C�Ӥ��� 
    if ((s.at(i)>=65) && (s.at(i)<=90)){ //�ھ�ASCII�j�g�r������65��90 
      s.at(i)=tolower(s.at(i));  //�ন�p�g 
    }        
  }
  cout << s;  
}

