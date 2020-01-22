#include <iostream>
using namespace std;
int intGlobal=50;
void addOneHundred();
int main(){
  int intMain;  
  for(int intFor=1;intFor < 10;intFor=intFor+1){
    cout << "intFor=" << intFor << endl;        
  }
  cout << "intGlobal=" << intGlobal << endl;   
  addOneHundred();
  cout << "intGlobal=" << intGlobal << endl;
}

void addOneHundred(){
  int intSub=100;
  intGlobal=intGlobal+intSub;
}
