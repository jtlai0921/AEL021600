#include <iostream>
#include <string>
#include <cstring>
using namespace std;
typedef struct _stu{
  string name;
  int seat;
  int chi;
  int eng;       
  int math;     
} stu;
typedef struct _teach{
  string name;
  stu student[2];
} teach;
void in(stu *);
stu *add(stu *);
int main(){
  stu *pstud1,*pstud2,stud1,stud2;
  pstud1=&stud1;
  pstud2=&stud2;
  in(pstud1);
  in(pstud2);  
  teach teacher;
  teacher.name="Ms. Wang";
  pstud1=add(pstud1);
  pstud2=add(pstud2);
  teacher.student[0]=*pstud1;
  teacher.student[1]=*pstud2;
  cout << "�Юv��" << teacher.name << endl;
  cout << "�ǥͬ�" << teacher.student[0].name << endl;
  cout << "�y����" << teacher.student[0].seat << endl;
  cout << "��妨�Z��" << teacher.student[0].chi << endl;
  cout << "�^�妨�Z��" << teacher.student[0].eng << endl;
  cout << "�ƾǦ��Z��" << teacher.student[0].math << endl;
  cout << "�ǥͬ�" << teacher.student[1].name << endl;
  cout << "�y����" << teacher.student[1].seat << endl;
  cout << "��妨�Z��" << teacher.student[1].chi << endl;
  cout << "�^�妨�Z��" << teacher.student[1].eng << endl;
  cout << "�ƾǦ��Z��" << teacher.student[1].math << endl;
}

void in(stu *student){
  cout << "�п�J�m�W";
  getline(cin,student->name);
  cout << "�п�J�y��";
  cin >> student->seat;
  cout << "�п�J��妨�Z";
  cin >> student->chi;
  cout << "�п�J�^�妨�Z";
  cin >> student->eng;
  cout << "�п�J�ƾǦ��Z";
  cin >> student->math;
  cin.get();  
}
stu *add(stu *student){
  student->chi=student->chi+5;
  student->eng=student->eng+10;   
  student->math=student->math+20;
  return student;     
}
