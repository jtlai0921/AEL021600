#include <iostream>
using namespace std;
int main(){
  double money,interest,r1,r2,r3;
  cout << "�п�J�����H";
  cin >> money;
  cout << "�п�J�~�Q�v�H";
  cin >> interest;
  r1=money*(1+interest/100);
  cout << "�Ĥ@�~���Q�M��" << r1 << endl;
  r2=money*(1+interest/100)*(1+interest/100);
  cout << "�ĤG�~���Q�M��" << r2 << endl;
  r3=money*(1+interest/100)*(1+interest/100)*(1+interest/100);
  cout << "�ĤT�~���Q�M��" << r3 << endl; 
}
