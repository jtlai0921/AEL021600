#include <iostream>
#include <string>
using namespace std;
typedef struct _stu{
  string name;    
} stu;
void in(stu *);
int main(){
  stu *pstud,stud;
  pstud=&stud;
  in(pstud);
  cout << "學生為" << pstud->name << endl;  
}
void in(stu *student){
  cout << "請輸入姓名";
  getline(cin,student->name); 
}
