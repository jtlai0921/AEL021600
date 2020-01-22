#include <iostream>
using namespace std;
int main(){
  int num;
  cout << "叫块计";
  cin >> num;
  if ((num%2) == 0){
    cout << num <<"案计" << endl;
  }else{
    cout << num <<"计" << endl;     
  }
}
