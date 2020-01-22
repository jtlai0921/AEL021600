#include <iostream>
using namespace std;
int main(){
  int i,j,flag;
  for(i=2;i<=10000;i=i+1){
    j=2,flag=1; 
    while ((flag ==1)&&(j<i)){
      if ((i%j) == 0){
        flag=0;          
      }
      j=j+1;
    }
    if (flag == 1){
      cout << i << "¬°½è¼Æ" << endl;
    }         
  }
}
