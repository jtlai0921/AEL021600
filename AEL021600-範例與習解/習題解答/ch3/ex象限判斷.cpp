#include <iostream>
using namespace std;
int main(){
  int x,y;
  cout  << "�п�J���I��X�y�СG";
  cin >> x;
  cout  << "�п�J���I��Y�y�СG";
  cin >> y;
  if ((x>0)&&(y>0)){
    cout << "���I�b�Ĥ@�H��" <<endl;
  }
  if ((x<0)&&(y>0)){
    cout << "���I�b�ĤG�H��" <<endl;
  }
  if ((x<0)&&(y<0)){
    cout << "���I�b�ĤT�H��" <<endl;
  }
  if ((x>0)&&(y<0)){
    cout << "���I�b�ĥ|�H��" <<endl;
  }
  if ((x==0)||(y==0)){
    cout << "���I�b�y�жb�W" <<endl;
  }
}

