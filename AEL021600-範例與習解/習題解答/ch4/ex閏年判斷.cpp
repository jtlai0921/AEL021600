#include <iostream>
using namespace std;
int main(){
  int year;
  cout << "�п�J�~���H";
  cin >> year;
  if  ((year%4)!=0)  {
    cout  << year << "���O�|�~" << endl;
  }else if ((year%400) == 0) {
    cout  << year << "�O�|�~" << endl;
  }else if ((year%100) == 0) {
    cout  << year << "���O�|�~" << endl;
  }else {
    cout  << year << "�O�|�~" << endl;
  } 
}
