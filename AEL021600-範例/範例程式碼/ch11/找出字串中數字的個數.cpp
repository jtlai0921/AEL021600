#include <iostream>
#include <string>
using namespace std;
int main(){
  string str1="abc12345defgh49053485jldjfa";
  int length=str1.length();
  int count=0;
  for(int i=0;i<length;i++){
    if (isdigit(str1.at(i))){
      count++;                       
    }        
  }
  cout << str1 << endl;
  cout << "�Ʀr�ӼƬ�" << count << "��" << endl;  
}
