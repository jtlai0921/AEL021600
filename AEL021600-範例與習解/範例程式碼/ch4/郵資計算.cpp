#include <iostream>
using namespace std;
int main(){
  int weight;
  cout << "�п�J���~���q�H";
  cin >> weight;
  if  (weight <= 5)  {
    cout  << "�һݶl�ꬰ50��" << endl;
  }else if (weight <= 10) {
    cout  << "�һݶl�ꬰ70��" << endl;
  }else if (weight <= 15) {
    cout  << "�һݶl�ꬰ90��" << endl;
  }else if (weight <= 20) {
    cout  << "�һݶl�ꬰ110��" << endl;
  }else {
    cout  << "�W�L20����L�k�H�e" << endl;
  }
}
