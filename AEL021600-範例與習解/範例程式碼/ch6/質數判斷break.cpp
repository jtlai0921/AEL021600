#include <iostream>
using namespace std;
int main(){
  int n,i=2,flag=1;
  cout << "�п�J�@�Ʀr�H";
  cin >> n;
  while ((flag ==1)&&(i<n)){
    if ((n%i) == 0){
      flag=0;
      break;         
    }
    i=i+1;
  }
  if (flag == 1){
    cout << n << "�����" << endl;         
  }else {
    cout << n << "�������" << endl;      
  }
}
