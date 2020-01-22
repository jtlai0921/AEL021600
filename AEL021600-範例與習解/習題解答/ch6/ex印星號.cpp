#include <iostream>
using namespace std;
int main(){
  int i=1;  
  while(i<=5){
    for(int j=1;j<=5-i;j=j+1){
    cout << " ";
    }
    for(int j=1;j<=i;j=j+1){
    cout << "*";
    }
    cout << endl; 
    i=i+1;       
  }
}
