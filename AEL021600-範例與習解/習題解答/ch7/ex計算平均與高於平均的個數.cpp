#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
  int score[40],sum=0;
  int count=0;
  double avg;
  srand(time(NULL)); 
  for(int i=0;i<40;i++){                     
    score[i]=rand()%101;
    sum=sum+score[i];
    cout << "��" << i+1 <<"�ӼƦr��" << score[i] << endl; 
  }
  avg=(double)sum/40; 
  for(int i=0;i<40;i++){
    if (score[i] > avg){
      count=count+1;        
    }       
  }
  cout << "���󥭧����ӼƬ�" << count << endl; 
} 

