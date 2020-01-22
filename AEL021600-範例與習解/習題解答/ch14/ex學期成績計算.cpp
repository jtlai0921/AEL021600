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
    cout << "第" << i+1 << "同學";   
    cout << "，第一次期中考為" << mystu[i].first;        
    cout << "，第二次期中考為" << mystu[i].sec;
    cout << "，期末考為" << mystu[i].final;
    cout << "，學期成績為" << mystu[i].seme <<endl;
  }
}

