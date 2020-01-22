#include <iostream>
using namespace std;
int global=5;
int main(){
  int local=2;
  cout << "local=" << local << ",global=" << global << endl;
  {
    int local=7;
    cout << "local=" << local << ",global=" << global << endl;     
  }
  cout << "local=" << local << ",global=" << global << endl;
  //system("pause");
}
