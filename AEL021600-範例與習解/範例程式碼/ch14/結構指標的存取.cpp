#include <iostream>
#include <cstring>
using namespace std;
int main(){
  struct stu{
    char name[10];   
  };
  struct stu *pstud;
  struct stu stud;
  pstud=&stud;
  strcpy(pstud->name,"John");
  cout << "學生姓名為" << (*pstud).name << endl;
  cout << "學生姓名為" << pstud->name << endl;  
}

