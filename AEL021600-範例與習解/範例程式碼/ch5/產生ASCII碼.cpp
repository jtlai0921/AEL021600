#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
  int start,end;
  cout << "請輸入ASCII的啟始值？";
  cin >> start;
  cout << "請輸入ASCII的終止值？";
  cin >> end;
  for(int i=start;i<=end;i++){
    cout << (char)i << endl;        
  }
}
