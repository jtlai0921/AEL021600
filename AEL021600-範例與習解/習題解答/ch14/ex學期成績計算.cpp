#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
typedef struct _stu{
  int stdno;
  int first;
  int sec;       
  int final;
  double seme;     
} stu;
int main(){
  srand(time(NULL));
  stu mystu[40];
  for(int i=0;i<40;i++){
    mystu[i].stdno=i; 
    mystu[i].first=rand()%41+60;        
    mystu[i].sec=rand()%41+60;
    mystu[i].final=rand()%41+60;
    mystu[i].seme=mystu[i].first*0.3+mystu[i].sec*0.3+mystu[i].final*0.4;     
  }
  for(int i=0;i<40;i++){
    cout << "��" << i+1 << "�P��";   
    cout << "�A�Ĥ@�������Ҭ�" << mystu[i].first;        
    cout << "�A�ĤG�������Ҭ�" << mystu[i].sec;
    cout << "�A�����Ҭ�" << mystu[i].final;
    cout << "�A�Ǵ����Z��" << mystu[i].seme <<endl;
  }
}

