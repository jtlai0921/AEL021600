#include <iostream>
#include <cstring> 
using namespace std;
int main(){
  char pwd[4]="c++";
  char input[40];
  do {
    cout << "�п�J�K�X"; 
    cin >> input;    
  }while(strcmp(input,pwd) != 0);
}

