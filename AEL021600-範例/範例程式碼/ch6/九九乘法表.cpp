#include <iostream>
using namespace std;
int main(){
  for(int i=1;i<=9;i=i+1){
    for(int j=1;j<=9;j=j+1){
    cout << i << "*" << j << "=" << i*j << " ";
    }
    cout << endl;        
  }
}
