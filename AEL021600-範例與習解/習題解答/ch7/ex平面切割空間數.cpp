#include <iostream>
using namespace std;
int main(){
  int num[101],n;
  num[1]=2; 
  for(int i=2;i<101;i++){                     
    num[i]=num[i-1]+(i*i-i+2)/2; 
  }
  cout << "�п�Jn�ȡH";
  cin >> n;
  cout << "�̦h�Ŷ��ӼƬ�" << num[n] << endl; 
} 

