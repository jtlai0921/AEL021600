#include <iostream>
using namespace std;
int main(){
  int result=0,i=0;
  while (result <= 1000){
    i=i+1;
    result=result+i*i;
  }
  cout << "n=" << i <<  "¡A1*1+2*2+...+n*n=" << result << "¤j©ó1000"  << endl;         
}
