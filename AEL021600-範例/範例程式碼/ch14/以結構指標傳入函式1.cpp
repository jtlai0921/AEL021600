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
  cout << "�ǥͬ�" << pstud->name << endl;  
}
void in(stu *student){
  cout << "�п�J�m�W";
  getline(cin,student->name); 
}
