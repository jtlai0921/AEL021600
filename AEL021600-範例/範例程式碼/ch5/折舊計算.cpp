#include <iostream>
using namespace std;
int main(){
  int start,end,n;
  float value;
  cout << "�п�J��l���ȡH";
  cin >> start;
  cout << "�п�J���»��ȡH";
  cin >> end;
  cout << "�п�Jn�H";
  cin >> n;
  for(int i=1;i<=n;i++){
    value = start -(start - end)*i/n;
    cout << "��" << i << "�~���Ȭ�" << value << endl;        
  }
}
