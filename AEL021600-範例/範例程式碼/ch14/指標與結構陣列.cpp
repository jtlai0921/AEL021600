#include <iostream>
#include <string>
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
  stu student[5];
} teach;
int main(){
  stu *pstu;
  stu stud[5]={{"John",1,56,77,87},{"Mary",2,90,88,70},{"Claire",3,76,89,45},{"Bruce",4,98,90,87},{"Miller",5,56,56,99}}; 
  teach teacher;
  int sumChi=0,sumEng=0,sumMath=0;
  double avgChi,avgEng,avgMath;
  teacher.name="Ms. Wang";
  for(int i=0;i<5;i++){
    teacher.student[i]=stud[i];        
  }
  for (pstu=&teacher.student[0];pstu<&teacher.student[5];pstu++){
    sumChi = sumChi + pstu->chi; 
    sumEng = sumEng + pstu->eng;
    sumMath = sumMath + pstu->math;          
  }
  avgChi=(double)sumChi/5;
  avgEng=(double)sumEng/5;
  avgMath=(double)sumMath/5;
  cout << "�����Z�`����" << sumChi << endl;
  cout << "�����Z������" << avgChi << endl;
  cout << "�^����Z�`����" << sumEng << endl;
  cout << "�^����Z������" << avgEng << endl;
  cout << "�ƾǥ��Z�`����" << sumMath << endl;
  cout << "�ƾǥ��Z������" << avgMath << endl;
}
