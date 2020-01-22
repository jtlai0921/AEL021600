#include <iostream>
#include <cstring> 
using namespace std;
int main(){
  char str[40]="beauty is in the eye of the beholder";
  char *ptr;
  ptr=strtok(str," "); 
  while(ptr != NULL) {
    cout << ptr << endl;  
    ptr=strtok(NULL," ");
  }
}
