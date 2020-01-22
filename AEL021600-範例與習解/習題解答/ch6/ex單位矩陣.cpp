#include <iostream>
using namespace std;
int main(){
  int i=1,j;  
  while(i<=4){
    j=1;
    while(j<=4){
      if (i == j) {
        cout << "1";      
      }else{
        cout << "0";      
      }
      j=j+1;         
    }
    i=i+1;
    cout << endl;       
  }
}
