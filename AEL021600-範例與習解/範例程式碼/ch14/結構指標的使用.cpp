#include <iostream>
#include <cstring>
using namespace std;
int main(){
  struct stu{
    char name[10];   
  };
  struct stu *pstud,stud;
  pstud=&stud;
  strcpy((*pstud).name,"John");
  cout << "�ǥͩm�W��" << (*pstud).name << endl;  
}


