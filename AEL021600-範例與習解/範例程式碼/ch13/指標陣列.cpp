#include <iostream>
using namespace std;
int main(){
  char *name[5];
  name[0]="John";
  name[1]="Mary";
  name[2]="Tony";
  name[3]="Bruce"; 
  name[4]="Claire";
  for(int i=0;i<5;i++){
    cout << "&name[" << i << "]=" << &name[i] << endl; 
    cout << "�y��" << i+1 << "���P�ǩm�W��" << name[i] << endl;                 
  }  
}
