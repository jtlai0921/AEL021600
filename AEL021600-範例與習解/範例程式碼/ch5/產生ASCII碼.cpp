#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
  int start,end;
  cout << "�п�JASCII���ҩl�ȡH";
  cin >> start;
  cout << "�п�JASCII���פ�ȡH";
  cin >> end;
  for(int i=start;i<=end;i++){
    cout << (char)i << endl;        
  }
}
