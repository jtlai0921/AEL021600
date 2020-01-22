#include <iostream>
using namespace std;
int main(){
  int seat,group;
  cout << "請輸入座號？";
  cin >> seat;
  group=(int)(seat-1)/5+1;
  cout << "分組組別為" << group << endl; 
}

