#include <iostream>
using namespace std;
int main(){
  int start,end,inc;
  int sum=0;
  cout << "�п�J�[�`�}�l�ȡH";
  cin >> start;
  cout << "�п�J�[�`�פ�ȡH";
  cin >> end;
  cout << "�п�J���W��ȡH";
  cin >> inc;
  for(int i=start;i<=end;i=i+inc){
    sum = sum + i;
    cout << "i=" << i << ",sum=" << sum << endl;        
  }
}
