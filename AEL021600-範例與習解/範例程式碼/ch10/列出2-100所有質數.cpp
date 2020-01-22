#include <iostream>
using namespace std;
int isPrime(int);
int main(){
  int result;
  for(int i=2;i<=100;i=i+1){
    result=isPrime(i);
    if (result == 1){
      cout << i << "¬°½è¼Æ" << endl;
    }         
  } 
}

int isPrime(int x){
  int j=2,flag=1; 
  while ((flag ==1)&&(j<x)){
    if ((x%j) == 0){
      flag=0;
      break;          
    }
    j=j+1;
  }
  return flag;
}
